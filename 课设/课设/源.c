#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#define N 40
#define LEN sizeof(struct student) 
#define FORMAT "%d %s %.2lf %.2lf %.2lf %.2lf\n"
#define DATA stu[i].num,stu[i].name,stu[i].m,stu[i].e,stu[i].sum

struct student
{
	int num;
	char name[15];
	double c;
	double m;
	double e;
	double sum;

}stu[N];//����ṹ������

void show()
{

}
void in()
{
	int i, m = 0;
	char ch[2];
	FILE* fp;
	if ((fp = fopen("data.txt", "a+")) == NULL)//��ָ���ļ�
	{
		printf("ϵͳ�������뿪����Ա��ϵ��\n");
		return;
	}
	while (!feof(fp))
	{
		if (fread(&stu[m], LEN, 1, fp) == 1)
			m++;
	}
	fclose(fp);
	if (m == 0)
		printf("��ѧ���ɼ���¼��\n");
	else
	{
		system("cls");
		show();
	}
	if ((fp = fopen("data", "a+")) == NULL)
	{
		printf("ϵͳ�������뿪����Ա��ϵ��\n");
		return;
	}
	printf("�Ƿ�¼��ѧ���ɼ����밴(y/n)��");
	scanf("%s", ch);
	while (strcmp(ch, "y") == 0 || strcmp(ch, "n") == 0)
	{
		printf("������ѧ��ѧ�ţ�");
		scanf("%d", &stu[m].num);//����ѧ��ѧ��

		printf("������ѧ��������");
		scanf("%s", &stu[m].name);

		printf("C���ԣ�");
		scanf("%lf", &stu[m].c);

		printf("������");
		scanf("%lf", &stu[m].m);

		printf("Ӣ�");
		scanf("%lf", &stu[m].e);

		stu[m].sum = stu[m].c + stu[m].m + stu[m].e;
		if (fwrite(&stu[m], LEN, 1, fp) != 1)//����¼�����Ϣд��ָ���Ĵ����ļ�
		{
			printf("���ܱ��棬���뿪����Ա��ϵ��");
		}
		else
		{
			printf("%s�ɼ�¼��ɹ�!\n", stu[m].name);
			m++;
		}
		printf("�Ƿ����¼�룿��y/n):");
		scanf("%s", ch);
	}

	fclose(fp);
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

	while (1)
	{
		menu();
		scanf("%d", &n);
		switch (n)
		{
		case 1:in(); break;
		case 2:search(); break;
		case 3:del(); break;
		case 4:change(); break;
		case 5:order(); break;
		case 6:count(); break;
		default:exit(0);
		}
	}
	return 0;
}