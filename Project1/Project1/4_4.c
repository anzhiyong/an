#include <stdio.h>
int main()
{
	int a, y;
	a = 10; y = 0;
	do {
		a += 2;
		y += a;
		printf("a=%d y=%d\n", a, y);
		if (y > 20) break;
	} while (a <= 14);
	return 0;
}
