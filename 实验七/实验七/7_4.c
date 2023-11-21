#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//4 5
//5,4
void main()
{
	int* p1, * p2, * p, a, b;
		scanf("%d%d", &a, &b);
	p1 = &a; p2 = &b; /* 取变量的地址*/
	if (a < b) { p = p1; p1 = p2; p2 = p; } printf("%d,%d\n", *p1, *p2);
}