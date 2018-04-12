long i = 1;

int f()
{
	i++;
	return i + 1;
}

int main(int argc, char const *argv[])
{
	int a = f(i) + f(i) + f(i) + f(i);
	int b = a;
	return b;
}