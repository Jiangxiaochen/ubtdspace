/**
 * @Author:      xiaochen.jiang
 * @Email:       1370035324@qq.com
 * @DateTime:    2018-01-24 14:27:17
 * @Description: 
 *
 *struct sockaddr{
 *	uint16_t sa_family;
 *	char sa_data[14];
 *} 
 */

#include "csapp.h"

typedef struct addrinfo addrinfo;
typedef struct sockaddr sockaddr;

static void printsockaddr(sockaddr *sa){
	printf("%s\n", "**************");
	printf("%u\n", sa->sa_family);
	printf("%s\n", sa->sa_data);
	printf("%s\n", "**************");
}

static int count = 1;

static void printaddrinfo(addrinfo * ai){
	printf("---------------NO.%d-----------------\n", count++);
	printf("%s\n", "------------------------------------");
	printf("ai_flags: %d\n", ai->ai_flags);
	printf("ai_family: %d\n", ai->ai_family);
	printf("ai_socktype: %d\n", ai->ai_socktype);
	printf("ai_protocol: %d\n", ai->ai_protocol);
	printf("ai_canonname: %s\n", ai->ai_canonname);
	printf("ai_addrlen: %u\n", ai->ai_addrlen);
	printf("ai_addr: %p\n", ai->ai_addr);
	if(ai->ai_addr != NULL){
		printsockaddr(ai->ai_addr);
	}
	printf("ai_next: %p\n", ai->ai_next);
	printf("%s\n", "------------------------------------");

}

int main(int argc, char const *argv[])
{
	const char *host = argv[1];
	const char *service = argv[2];
	struct addrinfo **result;// = (struct addrinfo **)(malloc(sizeof(struct addrinfo *)*100));
	if(getaddrinfo(host, service, NULL,result) == 0){
		printf("%s\n", "ok");
		addrinfo *ai = result[0];
		while(ai != NULL){
			printaddrinfo(ai);
			ai = ai->ai_next;
		}
	}
	return 0;
}