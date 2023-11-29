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

void in();//录入功能 
void show();//显示学生成绩信息 
void search();//查找功能 
void del();//删除功能 
void change();//修改功能
void order();//排序功能
void count();//统计功能
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
void main()/*主函数*/
{ 
	int n;
	menu();
	scanf("%d",&n);/*输入选择功能的编号*/
	while(n)
	{ 
		switch(n)
		{  case 1: in();break;
		   case 2: search();break;
		   case 3: del();break;
		   case 4: change();break;
		   case 5:order();break;
		   case 6:count();break;
		default:break;  }
		menu();/*执行完功能再次显示菜单界面*/
		scanf("%d",&n);   }
}

void in()/*自定义函数实现录入学生成绩信息*/
{ 	int i,m=0;/*m是记录的条数*/
	char ch[2];
	FILE *fp;/*定义文件指针*/
	if((fp=fopen("data","a+"))==NULL)/*打开指定文件*/
	{ 
		printf("系统出错，请与开发人员联系！\n");
		return;
	}
	while(!feof(fp)) 
	{ 
		if(fread(&stu[m] ,LEN,1,fp)==1)
			m++;/*统计当前记录条数*/
	}
	fclose(fp);
	if(m==0) 
		printf("无学生成绩记录!\n");
	else 
	{
		system("cls");
		show();/*调用show函数，显示原有信息*/
	}
	if((fp=fopen("data","a+"))==NULL)
	{ 
		printf("系统出错，请与开发人员联系！\n");
		return;
	}
	printf("是否录入学生成绩，请按(y/n):");
	scanf("%s",ch);
	while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)/*判断是否要录入新信息*/
	{
		printf("请输入学生学号:");
		scanf("%d",&stu[m].num);/*输入学生学号*/
		for(i=0;i<m;i++)
			if(stu[i].num==stu[m].num)
			{
				printf("您输入的学号已经存在!");
				getch();
				fclose(fp);				
				return;
			}
			printf("请输入学生姓名:");
			scanf("%s",stu[m].name);/*输入学生姓名*/
			printf("C语言:");
			scanf("%lf",&stu[m].c);/*输入C语言成绩*/
			printf("高数:");
			scanf("%lf",&stu[m].m);/*输入高数成绩*/
			printf("英语:");
			scanf("%lf",&stu[m].e);/*输入英语成绩*/
			stu[m].sum=stu[m].c+stu[m].m+stu[m].e;/*计算出总成绩*/
			if(fwrite(&stu[m],LEN,1,fp)!=1)/*将新录入的信息写入指定的磁盘文件*/
			{
				printf("不能保存，请与开发人员联系!");  
			}
			else
			{ 
				printf("%s成绩录入成功!\n",stu[m].name);
				m++;
			}
			printf("是否继续录入?(y/n):");/*询问是否继续*/
			scanf("%s",ch);
	}
	fclose(fp);
	
}
void show()//自定义函数实现显示学生成绩信息 
{
	FILE* fp;
	int i,m=0;
	fp=fopen("data","r");
	while(!feof(fp))
	{
		if(fread(&stu[m],LEN,1,fp))
		{
			m++;
		}
	}
	fclose(fp);
	printf("学号	姓名	C语言	高数	英语	总分\t\n");
	for(i=0;i<m;i++)
	{
		printf(FORMAT,DATA);
	}
}
void search()
{
	FILE* fp;
	int snum,i,m=0;
	char ch[2];
	if(fp=fopen("data","r")==NULL)
	{
		pritntf("打开失败，请联系管理员");
		return; 
	}
	while(!feof(fp))
	{
		if(fread(&stu[m],LEN,1,fp)==1)
		{
			m++;
		}
	}
	fclose(fp);
	if(m==0)
	{
		printf("无记录");
		getch();
		return;
	}
	printf("请输入你的学号");
	scanf("%d",&snum);
	for(i=0;i<m;i++)
	{
		if(snum==stu[i].num)
		{
			printf("查询成功，是否显示（y/n）：");
			scanf("%s",ch);
			if(ch=="Y"||ch=="y")
			{
				printf("学号	姓名	C语言	高数	英语	总分\t\n");
				printf(FORMAT,DATA);/*将查找出的结果按指定格式输出*/
				getch();
				break; 	
			}
			else
				return;
			}
		}

	}
	if(i==m)
		printf("未找到学生信息");
	
}
 


 