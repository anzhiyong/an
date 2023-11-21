
#include <stdio.h>
//5
//b = 11.000000
int fun(float x);
void main()
{
	float a, b;
	scanf("%f", &a);
	b = fun(a);
	printf("b=%f\n", b);
}
int fun(float x)
{
	
		float y;
	y = 3 * x
		- 4;
	return y;
}
