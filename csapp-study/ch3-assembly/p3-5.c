void decode1(long *xp, long *yp, long *zp)
{
	long tmp1 = *xp;
	long tmp2 = *yp;
	long tmp3 = *zp;

	*yp = tmp1;
	*zp = tmp2;
	*xp = tmp3;
}