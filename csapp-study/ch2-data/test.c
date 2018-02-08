#include "stdint.h"
#include "stdio.h"
#include "sys/types.h"
#include "inttypes.h"

// int main(int argc, char const *argv[])
// {
// 	uint16_t a = 0xabcd;
// 	uint8_t b = *((uint8_t *)&a);
// 	if(b == 0xab)
// 	{
// 		printf("big endian: b = 0x%x\n", b);
// 	}
// 	else
// 	{
// 		printf("small endian: b = 0x%x\n", b);
// 	}
// 	return 0;
// }

// int main(int argc, char const *argv[])
// {

// 	printf("%s\n", PRId32);
// 	printf("%s\n", PRIu64);
// 	unsigned length = 0;

// }



int find2(int *arr, unsigned len, int key)
{
	//0 ele
	if(!arr || len == 0) return -1;

	if(arr[0] == key) return 0;
	if(arr[len - 1] == key) return len - 1;
	//1 ele
	if(len == 1) return -1;
	//>1
	unsigned left = 1;
	unsigned right = len - 2;
	unsigned mid;
	while(left <= right)
	{
		mid = (left >> 1) + (right >> 1);
		if(arr[mid] == key) return mid;
		if(arr[mid] < key)
		{
			left = mid + 1;
		}
		if(arr[mid] > key)
		{
			right = mid - 1;
		}
	}
	return -1;
}


int find1(int *arr, int len, int key)
{
	//参数错误
	if(!arr || len <= 0) return -2;
	int low = 0, high = len - 1;
	int mid;

	while(low <= high)
	{
		mid = (low >> 1) + (high >> 1) + 1;
		//printf("%d\n", mid);
		if(arr[mid] == key) return mid;
		if (arr[mid] > key)
		{
			high = mid - 1;
		}
		if(arr[mid] < key)
		{
			low = mid + 1;
		}
	}

	return -1;
}

/**
 * @Author:      xiaochen.jiang
 * @Email:       1370035324@qq.com
 * @DateTime:    2018-01-31 15:37:00
 * @Description: 
 * 假设a[INT_MAX] =  
 */

int main(int argc, char const *argv[])
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d\n", find1(a,10,10));
	return 0;
}