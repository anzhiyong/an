#include<stdio.h>
int main()
{
	int a,b,sum;
	for(a=0,b=5;a<=4,b>=1;a++,b--)
	{
		sum=a+b;
		printf("%d+%d=%d\n",a,b,sum);
	}
}
