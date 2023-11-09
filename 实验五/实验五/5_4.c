#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//用二维数组保存一个 3 行 3 列的数组，然后对每个元素进行累加计算
int main()
{
	int arr[3][3];
	int i, j, sum = 0;
	for (i = 0; i < 3; i ++ )
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
			sum += arr[i][j];
		}
	}
	printf("%d", sum);
}