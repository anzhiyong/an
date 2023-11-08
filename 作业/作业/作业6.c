#define _CRT_SECURE_NO_WARNINGS
////定义一个3 * 4整型的二维数组a, 从键盘上给数组赋值，
//// 输出最大元素的值及其所在的行号和列号。
//#include<stdio.h>
//int main()
//{
//	int a[3][4];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//			scanf("%d", &a[i][j]);
//	}
//	int max = a[0];
//	int k=0, g=0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (a[i][j] >max )
//			{
//				max = a[i][j];
//				k = i;
//				g = j;
//			}
//				
//		}
//	}
//	printf("最大值为%d,所在行为%d,列为%d", max, k, g);
//
//}



//用冒泡排序法对10个整数进行排序。
// (提示:利用一维数组进行存放从键盘接收的10个整数)
#include<stdio.h>
int main()
{
	int a[11];
	int i = 0;
	for (i = 1; i < 11; i++)
	{
		scanf("%d",a[i]);

	}
	//冒泡排序

	
}