/**
 * @Author:      xiaochen.jiang
 * @Email:       1370035324@qq.com
 * @DateTime:    2018-01-29 11:14:39
 * @Description: test3 
 */

int main(int argc, char const *argv[])
{
	for (int i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
	int a = 1;
	printf("sizeof int: %d\n", sizeof(int));
	printf("sizeof int *: %d\n", sizeof(int *));
	printf("%p\n", &a);
	return 0;
}
