#define _CRT_SECURE_NO_WARNINGS 1

#include"Heap.h"

//int main()
//{
//	int a[] = { 60,70,65,50,32,100 };
//	//∂—≈≈–Ú
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
	// ‘Ï ˝æ›
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



int main()
{
	
	PrintTopK();
	//TopK();
	return 0;
}