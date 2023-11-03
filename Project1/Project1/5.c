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
		printf("还剩%d机会\n",tag);
		printf("请输入账号：");
		scanf("%s",zh1);
		printf("请输入密码：");
		scanf("%s",ch1);
		if(strcmp(ch,ch1)||strcmp(zh,zh1))
		{
			printf("账号或密码错误！"); 
			
			tag--;
		}
		else
		{
			printf("登录成功！");
			break;
		}
	}while(tag);
}
