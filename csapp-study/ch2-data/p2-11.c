void inplace_swap(int *x, int *y)
{
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

//bug version
void reverse_array(int *a, int cnt)
{
	int first,last;
	for(first = 0, last = cnt - 1; first <= last; first++, last--)
		inplace_swap(&a[first], &a[last]);
}

void reverse_array2(int *a, int cnt)
{
	int first,last;
	for(first = 0, last = cnt - 1; first < last; first++, last--)
		inplace_swap(&a[first], &a[last]);
}

int main(int argc, char const *argv[])
{
	int a[] = {1,2,3,4,5};
	reverse_array(a,5);
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n", a[i]);
	}
	int b[] = {1,2,3,4,5};
	reverse_array2(b,5);
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n", b[i]);
	}
	return 0;
}