int tadd_ok(int x, int y)
{
	int s = x + y;
	if ((x < 0 == y < 0) && (s < 0 != x < 0)) return 0;
	return 1;
}