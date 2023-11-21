#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void swap(int* px, int* py)
{
	if (*px < *py)
	{
		int a = *px;
		*px = *py;
		*py = a;
	}
}
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	swap(&a, &b);
	swap(&a, &c);
	swap(&b, &c);
	printf("%d %d %d", a, b, c);
	return 0;
}