#include <stdio.h>
int main()
{
	int a = 0, total = 0;
	do {
		total = total + a;
	} while ((a++) <= 10);
	printf("%d", total);
	return 0;
}
