/**
 * @Author:      xiaochen.jiang
 * @Email:       1370035324@qq.com
 * @DateTime:    2018-01-23 14:14:52
 * @Description: test read & write 
 */

#include <csapp.h>

typedef char byte;

ssize_t jxc_rio_readn(int fd, void *usrbuf, size_t n);
ssize_t jxc_rio_writen(int fd, void *usrbuf, size_t n);
void jxc_rio_readinitb(rio_t *rp, int fd);
void jxc_rio_readlineb(rio_t *rp, void *usrbuf, size_t maxlen);
ssize_t jxc_rio_readnb(rio_t *rp, void *usrbuf, size_t n);

int main(int argc, char const *argv[])
{
	byte c;
	ssize_t l;
	// printf("%lu\n", sizeof(byte));
	while((l=read(STDIN_FILENO, &c, 1)) != 0){
		printf("%lu\n",l);
		write(STDOUT_FILENO, &c, 1);
	}
	return 0;
}

ssize_t jxc_rio_readn(int fd, void *usrbuf, size_t n){
	size_t nleft = n;
	ssize_t nread;
	char *bufp = usrbuf;
	while(nleft > 0){
		if((nread = read(fd, bufp, nleft)) < 0){
			if(errno == EINTR) nread = 0;
			else return -1;
		}else if(nread == 0){
			break;//eof
		}
		nleft -= nread;
		bufp += nread;
	}
	return (n - nleft);
}

ssize_t jxc_rio_writen(int fd, void *usrbuf, size_t n){
	size_t nleft = n;
	ssize_t nwritten;
	char *bufp = usrbuf;
	while(nleft > 0){
		if((nwritten = write(fd, bufp, nleft)) <= 0){
			if(errno == EINTR) nwritten = 0;
			else return -1;
		}
		nleft -= nwritten;
		bufp += nwritten;
	}
	return n;
}