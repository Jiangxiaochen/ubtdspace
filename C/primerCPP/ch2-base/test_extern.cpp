#ifdef MYEXT
extern "C"
{
	long int f(double, char *);
}
#endif


int main()
{
	char a[1];
	char *c_ptr = a;
	f(1.1L,c_ptr);
}
