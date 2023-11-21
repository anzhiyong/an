
#include <stdio.h>
//15
void main()
{
	int x = 2, y = 5, z = 8, r;
	int func(int a, int b);
	r = func(func(x, y), z);
	printf("%d\n", r);
}
int func(int a, int b)
{
	return(a + b);
}
