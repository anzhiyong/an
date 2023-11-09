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
//#include<stdio.h>
//int main()
//{
//	int a[10];
//	int i, j, temp;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	//冒泡排序
//	for (i = 0; i < 10; i++)
//	{
//		for (j = i+1; j < 10; j++)
//		{
//			if (a[i] > a[j])
//			{
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%5d", a[i]);
//	}
//	
//}


//将一个数组中的值按逆序重新存放。
// 例如：原来顺序为8，6，5，4，1。要求改为1，4，5，6，8。
//#include<stdio.h>
//
//int main() {
//	int t;
//	int i;
//	int n;
//	scanf("%d", &n);
//	int a[n];
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < n / 2; i++) {
//		t = a[i];
//		a[i] = a[n - i - 1];
//		a[n - i - 1] = t;
//	}
//	for (i = 0; i < n; i++)
//		printf("%5d", a[i]);
//	return 0;
//}



//从键盘接收一行字符，以回车作为结束符。
// 要求分别统计出其中英文大写字母，小写字母，数字，空格及其他字符的个数。
#include<stdio.h>
int main()
{
	char ch;
	int d=0;
	int x=0;
	int sum=0;
	int other=0;
	int flag;
	while ((ch = getchar()) != '\n')
	{
		flag = 1;
		if (ch >= 'A' && ch <= 'Z')
		{
			d++;
			flag = 0;
		}
		if (ch >= 'a' && ch <= 'z')
		{
			x++;
			flag = 0;
		}
		if (ch >= '0' && ch <= '9')
		{
			sum++;
			flag = 0;
		}
		if (flag)
		{
			other++;
		}
	}
	printf("大写字母%d,小写字母%d,数字%d,其他字符%d", d, x, sum, other);
}