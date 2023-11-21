#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//3 7 9 11 0 6 7 5 4 2
//2 4 5 7 6 0 11 9 7 3
void inv(int* x, int n) /* 形参为指针变量*/
{
	int* p, temp, * i, * j, m = (n - 1) / 2;
	i = x; j = x + n - 1; p = x + m;
	for (; i <= p; i++, j--)
	{
		temp = *i; *i = *j; *j = temp;
	}
	return;
}
void main()
{
	int i, a[10] = { 3,7,9,11,0,6,7,5,4,2 };
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	inv(a, 10); /* 函数调用，实参为数组名*/
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
}
