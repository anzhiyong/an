#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ö�ά���鱣��һ�� 3 �� 3 �е����飬Ȼ���ÿ��Ԫ�ؽ����ۼӼ���
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