#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//4 5 3 2 6 7 5 8 7 9
//4 5 3 2 6 7 5 8 7 9
void main()
{
	int a[10], i, * p;
	for (i = 0; i < 10; i++) scanf("%d", &a[i]);
	for (p = a; p < (a + 10); p++) printf("%d ", *p);
}