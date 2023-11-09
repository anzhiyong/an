#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n[3], t, j, k;
	for (t = 0; t < 3; t++)
		n[t] = 0;
	k = 2;
	for (t = 0; t < k; t++)
		for (j = 0; j < 3; j++)
			n[j] = n[t] + 1;
	printf("%d\n", n[1]);
	return 0;
}