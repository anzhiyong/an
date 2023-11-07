#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include "add.h"

//导入静态库
//#pragma comment(lib, "add.lib")
//
//int main()
//{
//	//实现2个整数的相加
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//



//int c = 100;//全局变量
//
//void test()
//{
//	printf("c = %d\n", c);
//}
//
//int main()
//{
//	int i = 0;
//	int b = 20;
//
//	for (i = 0; i < 10; i++)
//	{
//		int a = 10;
//		printf("b = %d\n", b);
//		printf("c = %d\n", c);
//	}
//	printf("a = %d\n", a);//err
//	printf("b = %d\n", b);
//	printf("c = %d\n", c);
//
//	return 0;
//}
//
//int main()
//{
//	{
//		int a = 10;
//		int b = a + 1;
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);//err
//
//	return 0;
//}

//int a = 2023;
//
//void test()
//{
//	printf("test->a = %d\n", a);
//}
//
//int main()
//{
//	test();
//	printf("main->a = %d\n", a);
//	//.....
//	printf("main->a = %d\n", a);
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}
//

//声明外部符号的
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//声明
extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);

	return 0;
}