#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[3][4];
//	int i, j, row, cow;
//	for (i = 0; i < 3;i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int max = arr[0][0];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				row = i;
//				cow = j;
//			}
//		}
//	}
//	printf("最大值%d行%d列%d", max, row, cow);
//}


//void sort(int arr[], int sz)  //冒泡
//{
//	int i,j;
//	int tem=0;
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 4,45,3,2,4,2,1,6,7,4 };
//	sort(arr, 10);
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int main()
//{
//	int i=10,j=2;
//	;
//	printf("%d", i*= j + 8);
//}

//逆序
void nixu(int arr[], int sz)
{
	int i = 0, j = sz - 1;
	while (i < j)
	{
		int tem;
		tem = arr[i];
		arr[i] = arr[j];
		arr[j] = tem;
		i++;
		j--;
	}
}
int main()
{
	int arr[5] = { 8,6,5,4,1 };
	int i;
	nixu(arr, 5);
	for (i = 0; i < 5; i++)
		{
			printf("%d ", arr[i]);
		}
}