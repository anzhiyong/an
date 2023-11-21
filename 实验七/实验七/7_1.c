#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10];
	int* pa = &arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", pa + i);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(pa + i));
	}
}