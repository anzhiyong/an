#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void in()
{
	printf("����¼�빦��") ;
}

void search()
{
	printf("���ǲ�ѯ����");
}

void del()
{
	printf("����ɾ������"); 
}

void change()
{
	printf("�����޸Ĺ���"); 
}

void order()
{
	printf("����������");
} 

void count()
{
	printf("����ͳ�ƹ���");
} 
void menu() 
{
	printf("\n\n\n\n");
	printf("\t\t|-------------ѧ���ɼ�����ϵͳ---------------------|\n");
	printf("\t\t|\t 1.¼��ѧ���ɼ���Ϣ                      |\n");
	printf("\t\t|\t 2.��ѯѧ���ɼ���Ϣ                      |\n");
	printf("\t\t|\t 3.ɾ��ѧ���ɼ���Ϣ                      |\n");
	printf("\t\t|\t 4.�޸�ѧ���ɼ���Ϣ                      |\n");
	printf("\t\t|\t 5.ѧ���ɼ�����                          |\n");
	printf("\t\t|\t 6.ͳ����Ϣ����                          |\n");
	printf("\t\t|\t 0.�˳�                                  |\n");
	printf("\t\t\t��ѡ��(0-6):");
}
int main()
{
	int n;
	
	while(1)
	{
		menu();
		scanf("%d",&n);
		switch(n)
		{
		case 1:in();break;
		case 2:search();break;
		case 3:del();break;
		case 4:change();break;
		case 5:order();break;
		case 6:count();break;
		default:exit(0);
		}
	}
	return 0;
} 
