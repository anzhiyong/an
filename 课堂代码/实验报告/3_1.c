#include<stdio.h>
int main()
{
	int a,b,c,k;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		k=a;
		a=b;
		b=k;
	}if(a>c)
	{
		k=a;
		a=c;
		b=k;
	}if(b>c)
	{
		k=b;
		b=c;
		c=k;
	}
	printf("%d%d%d",a,b,c);
	
}
