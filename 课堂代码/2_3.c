#include<stdio.h>
int main()
{
	long a,g,s,b,q,w;
	scanf("%ld",&a);
	g=a%10;
	s=a/10%10;
	b=a/100%10;
	q=a/1000%10;
	w=a/10000;
	printf("输出：%d,个位：%d,十位：%d,百位：%d,千位：%d,万位：%d",a,g,s,b,q,w);
}
