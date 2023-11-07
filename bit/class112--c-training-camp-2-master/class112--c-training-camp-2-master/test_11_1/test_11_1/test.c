#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>

//void test()
//{
//	printf("test\n");
//}
//
//int main()
//{
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	test();
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;
//}
//


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int arr[10] = { 0 };
//    int num = 100;
//    char c = 'w';
//
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        arr[i] = i;
//    }
//    return 0;
//}


//求1!+ 2!+ 3!+ 4!+ ...10!的和
//4! = 1*2*3*4
//5! = 1*2*3*4*5
//n! = 1*2*..*n

//求n的阶乘

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}


//#include <stdio.h>

//
//在VS2022、X86、Debug 的环境下
//在特定的环境下才能出现，是依赖环境的
//

//int main()
//{
//    int i = 0;
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    //              0                 9
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;//越界了
//        printf("hehe\n");
//    }
//
//    return 0;
//}


//void test(int arr[])
//{
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	test(arr);
//	return 0;
//}


//void test(int arr[3][5])
//{
//	1 + 2;
//}
//
//int main()
//{
//	int arr[3][5] =  {1,2,3,4,5,6,7,8,9,10 };
//
//	test(arr);
//	return 0;
//}
//
#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	printf("hehe\n");
	int c = Add(3, 5);
	printf("%d\n", c);

	return 0;
}




















