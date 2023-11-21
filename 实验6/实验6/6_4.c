#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//5 10
//x = 10, y = 5
//a = 5, b = 10
void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("x=%d,y=%d\n", x, y);
	
}
void main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	swap(a, b);
	printf("a=%d,b=%d\n", a, b);
}
