#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[2][3];
	int i = 0;

	for (i = 0; i < 2; i++)
	{
		int j;
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}