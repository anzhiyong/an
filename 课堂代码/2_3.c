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
	printf("�����%d,��λ��%d,ʮλ��%d,��λ��%d,ǧλ��%d,��λ��%d",a,g,s,b,q,w);
}
