#define _CRT_SECURE_NO_WARNINGS 1

#include"Heap.h"

//int main()
//{
//	int a[] = { 60,70,65,50,32,100 };
//	//堆排序
//	HeapSort(a, 6);
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//
//	/*Heap hp;
//	HeapInit(&hp);
//	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
//	{
//		HeapPush(&hp, a[i]);
//	}*/
//	//printf("%d\n", HeapTop(&hp));
//	//printf("%d\n", HeapSize(&hp));
//	/*int i;
//	while(!HeapEmpty(&hp))
//	{
//		HeapPop(&hp);
//		printf("%d\n", HeapTop(&hp));
//
//	}*/
//	
//	//HeapDestory(&hp);
//
//	return 0;
//}


void CreateNDate()
{
	// 造数据
	int n = 10000;
	srand(time(0));
	const char* file = "D:\\Code\\legend\\tree\\data.txt";
	FILE* fin = fopen(file, "w");
	if (fin == NULL)
	{
		perror("fopen error");
		return;
	}

	for (size_t i = 0; i < n; ++i)
	{
		int x = rand() % 1000000;
		fprintf(fin, "%d\n", x);
	}

	fclose(fin);
}


void PrintTopK()
{
	int k;
	scanf("%d", &k);
	const char* file = "D:\\Code\\legend\\tree\\data.txt";
	FILE* cost = fopen(file, "r");
	int val = 0;
	int* minheap = (int*)malloc(sizeof(int) * k);
	for (int i = 0; i < 10; i++)
	{
		fscanf(cost, "%d", &minheap[i]);
	}

	//建小堆
	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(minheap, k, i);
	}

	int x = 0;
	while (fscanf(cost, "%d", &x) != EOF)
	{
		// 读取剩余数据，比堆顶的值大，就替换他进堆
		if (x > minheap[0])
		{
			minheap[0] = x;
			AdjustDown(minheap, k, 0);
		}
	}

	for (int i = 0; i < k; i++)
	{
		printf("%d ", minheap[i]);
	}

	fclose(cost);
}
int main()
{
	
	PrintTopK();
	return 0;
}