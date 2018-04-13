#define NULLUT ((struct utmp *) NULL)
#define UTSIZE (sizeof(struct utmp))
#define NRECS 16

static int num_recs;
static int cur_rec;
static int fd_utmp = -1;
static char utmpbuf[NRECS * UTSIZE];

int utmp_open(char *filename)
{
	fd_utmp = open(filename, O_RDONLY);
	cur_rec = num_recs = 0;
	return fd_utmp;
}

struct utmp *utmp_next()
{
	struct utmp *recp;
	if(fd_utmp == -1) return NULLUT;
	if(cur_rec == num_recs && utmp_reload() == 0) return NULLUT;

	recp = (struct utmp *) &utmpbuf[cur_rec * UTSIZE];
	cur_rec++;
	return recp;
}
