#include<stdio.h>
int main()
{
	int m, g, s, b;
	scanf("%d", &m);
	g = m % 10;
	s = m / 10 % 10;
	b = m / 100;
	printf("%d", g * 100 + s * 10 + b);
}