#include<stdio.h>
int main()
{
	int i=1,n=0;
	printf("1~100���ܱ�3��������"); 
	for(i=1;i<=100;i++)
	{
		if(i%3!=0)
		{
			printf("%d  ",i);
			n++;
		}
		
	}
	printf("��%d����������",n); 
	/*while(i<=100)
	{
		if(i%3!=0)
			printf("%d ",i);
		i++;
	}*/
	/*do
	{
		if(i%3!=0)
			printf("%d ",i);
		i++;
	}while(i<=100);*/
}
