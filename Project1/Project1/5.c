#include<stdio.h>
#include<string.h>
int main()
{
	char zh[100]={"anzhiyong"};
	char ch[100]={"123456"};
	char zh1[100];
	char ch1[100];
	
	int tag=3;
	do
	{
		printf("��ʣ%d����\n",tag);
		printf("�������˺ţ�");
		scanf("%s",zh1);
		printf("���������룺");
		scanf("%s",ch1);
		if(strcmp(ch,ch1)||strcmp(zh,zh1))
		{
			printf("�˺Ż��������"); 
			
			tag--;
		}
		else
		{
			printf("��¼�ɹ���");
			break;
		}
	}while(tag);
}
