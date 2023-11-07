#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//在屏幕上打印1~10的值

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//1234
//
//	int cnt = 0;
//	do
//	{
//		cnt++;
//		num = num / 10;//num/=10
//	} while (num);
//
//	printf("%d\n", cnt);
//
//	return 0;
//}
//


//在屏幕上打印 1~10 的值 - while


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//break的作用就是跳过循环，不管循环后期还有多少次，只要break被执行，就直接停止
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//继续 - continue的作用是跳过本次循环continue后边的代码，直接去判断部分
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//在屏幕上打印 1~10 的值 - for
//for循环的初始化，判断，循环三个表达式都可以省略
//但是判断部分省略，要注意：如果省略了表示判断部分恒为真

//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}
// 
//int main()
//{
//	int i = 1;
//	for (; i<=10; i++)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//
//	return 0;
//}
//


//
//int main()
//{
//	//产生100~200之间的数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//假设i是素数
//
//		//产生的i就是100到200之间的数字
//		//每次循环进来产生一个i，这个时候判断i是否是素数
//		//方法是：产生2~i-1之间的数字，去试除i
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//表示i不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}



//
//int main()
//{
//	//产生100~200之间的数
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;//假设i是素数
//
//		//产生的i就是100到200之间的数字
//		//每次循环进来产生一个i，这个时候判断i是否是素数
//		//方法是：产生2~i-1之间的数字，去试除i
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//表示i不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//

#include <math.h>
//sqrt- 库函数- 开平方的
// 
//int main()
//{
//	//产生100~200之间的数
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int flag = 1;//假设i是素数
//
//		//产生的i就是100到200之间的数字
//		//每次循环进来产生一个i，这个时候判断i是否是素数
//		//方法是：产生2~i-1之间的数字，去试除i
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//表示i不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//



//
//int main()
//{
//	printf("hehe\n");
//	printf("haha\n");
//zhangsan:
//	printf("heihei\n");
//	goto zhangsan;
//
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i=0; i < 5; i++)
//	{
//		for (j=0; j < 5; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}



#include <stdlib.h>
#include <time.h>


//函数
void menu()
{
	printf("************************\n");
	printf("******  1. play  *******\n");
	printf("******  0. exit  *******\n");
	printf("************************\n");
}

//猜数字游戏的实现
void game()
{
	//1. 生成随机数（1~100）
	int ret = rand()%100+1;//1~100
	//n%100 余数的取值的范围 0~99
	//2. 猜数字
	int guess = 0;
	int count =  5;
	while (count)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		count--;
	}

	if (count == 0)
	{
		printf("猜失败了，正确的数字是:%d\n", ret);
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();

		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);

	return 0;
}






#include <stdlib.h>
#include <time.h>


//int main()
//{
//	srand((unsigned int)time(NULL));
//
//	int r = rand();//生成的随机数的范围是0~RAND_MAX(32767)
//	printf("%d\n", r);
//	r = rand();
//	printf("%d\n", r);
//	r = rand();
//	printf("%d\n", r);
//	r = rand();
//	printf("%d\n", r);
//
//	return 0;
//}






























