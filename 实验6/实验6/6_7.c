
#include <stdio.h>
//4
int fun(int x)
{
	int a = 3;
	a += x;
	return(a);
}
void main() {
	int k = 2, m = 1, n;
	n = fun(k);
	n = fun(m);
	printf("%d", n);
}