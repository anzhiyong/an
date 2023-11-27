#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void in()
{
	printf("这是录入功能") ;
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
