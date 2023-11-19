#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

void swap(char* buf1, char* buf2, size_t width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tem = *buf1;
		*buf1 = *buf2;
		*buf2 = tem;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void* p1, const void* p2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width , width);
			}
		}
	}
}


//qsort实现一个通用的冒泡排序
void test1()
{
	int arr[] = { 3,1,5,7,9,2,4,0,8,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);

}

int main()
{
	test1();
	return 0;
}