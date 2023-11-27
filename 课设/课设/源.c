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

}stu[N];//定义结构体数组

void show()
{

}
void in()
{
	int i, m = 0;
	char ch[2];
	FILE* fp;
	if ((fp = fopen("data.txt", "a+")) == NULL)//打开指定文件
	{
		printf("系统出错，请与开发人员联系！\n");
		return;
	}
	while (!feof(fp))
	{
		if (fread(&stu[m], LEN, 1, fp) == 1)
			m++;
	}
	fclose(fp);
	if (m == 0)
		printf("无学生成绩记录！\n");
	else
	{
		system("cls");
		show();
	}
	if ((fp = fopen("data", "a+")) == NULL)
	{
		printf("系统出错，请与开发人员联系！\n");
		return;
	}
	printf("是否录入学生成绩，请按(y/n)：");
	scanf("%s", ch);
	while (strcmp(ch, "y") == 0 || strcmp(ch, "n") == 0)
	{
		printf("请输入学生学号：");
		scanf("%d", &stu[m].num);//输入学生学号

		printf("请输入学生姓名：");
		scanf("%s", &stu[m].name);

		printf("C语言：");
		scanf("%lf", &stu[m].c);

		printf("高数：");
		scanf("%lf", &stu[m].m);

		printf("英语：");
		scanf("%lf", &stu[m].e);

		stu[m].sum = stu[m].c + stu[m].m + stu[m].e;
		if (fwrite(&stu[m], LEN, 1, fp) != 1)//将新录入的信息写入指定的磁盘文件
		{
			printf("不能保存，请与开发人员联系！");
		}
		else
		{
			printf("%s成绩录入成功!\n", stu[m].name);
			m++;
		}
		printf("是否继续录入？（y/n):");
		scanf("%s", ch);
	}

	fclose(fp);
}

void search()
{
	printf("这是查询功能");
}

void del()
{
	printf("这是删除功能");
}

void change()
{
	printf("这是修改功能");
}

void order()
{
	printf("这是排序功能");
}

void count()
{
	printf("这是统计功能");
}
void menu()
{
	printf("\n\n\n\n");
	printf("\t\t|-------------学生成绩管理系统---------------------|\n");
	printf("\t\t|\t 1.录入学生成绩信息                      |\n");
	printf("\t\t|\t 2.查询学生成绩信息                      |\n");
	printf("\t\t|\t 3.删除学生成绩信息                      |\n");
	printf("\t\t|\t 4.修改学生成绩信息                      |\n");
	printf("\t\t|\t 5.学生成绩排序                          |\n");
	printf("\t\t|\t 6.统计信息数量                          |\n");
	printf("\t\t|\t 0.退出                                  |\n");
	printf("\t\t\t请选择(0-6):");
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