#include <unistd.h>

ssize_t rio_readn(int fd, void *usrbuf, size_t n)
{
	size_t nleft = n;
	ssize_t nread;
	char *bufp = usrbuf;
	while(nleft > 0)
	{
		if((nread = read(fd, bufp, nleft)) < 0)
		{
			//error
			if(errno == EINTR) nread = 0;
			else return -1;
		}
		else if (nread == 0) break;
		nleft -= nread;
		bufp += nread;
		printf("nleft:%d nread:%d\n", nleft, nread);
	}
	return (n - nleft);
}

ssize_t rio_writen(int fd, void *usrbuf, size_t n)
{
	size_t nleft = n;
	ssize_t nwritten;
	char *bufp = usrbuf;
	while(nleft > 0)
	{
		if((nwritten = write(fd,bufp,nleft)) <= 0)
		{
			if(errno == EINTR) nwritten = 0;
			else return -1;
		}
		nleft -= nwritten;
		bufp += nwritten;
	}
	return n;
}

static ssize_t rio_read(rio_t *rp, char *usrbuf, size_t n)
{
	int cnt;
	while(rio->rio_cnt <= 0)
	{
		rp->rio_cnt = read(rp->rio_fd, rp->rio_buf, sizeof(rp->rio_buf));
		if (rp->rio_cnt < 0)
		{
			if (errno != EINTR) return -1;
		}
		else if (rp->rio_cnt == 0) return 0;
		else rp->rio_bufptr = rp->rio_buf;
	}

	cnt = n;
	if (rp->rio_cnt < n) cnt = rp->rio_cnt;
	memcpy(usrbuf, rp->)
}








