#define _CRT_SECURE_NO_WARNINGS 1

#include"Sort.h"

void PrintArray(int* a, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);

	}
	printf("\n");
}

void InsertSort(int* a,int n)
{
	//[0-end]
	int i;
	for (i = 0; i < n-1; i++)
	{
		int end = i;
		int tem = a[end + 1];
		while (end >= 0)
		{
			if (tem < a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tem;
		
	}
}

void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)	
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tem = a[end + gap];
			while (end >= 0)
			{
				if (tem < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			
			a[end + gap] = tem;
		}
	}
}




void Swap(int* p1, int* p2)
{
	int tem = *p1;
	*p1 = *p2;
	*p2 = tem;
}

void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int eag = 0;
		for (int j = 1; j < n - i; j++)
		{
			
			if (a[j-1] > a[j])
			{
				Swap(&a[j-1], &a[j]);
				eag = 1;
			}
		}
		if (eag == 0)
		{
			break;
		}
	}
}


