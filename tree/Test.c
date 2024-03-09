#define _CRT_SECURE_NO_WARNINGS 1

#include"Heap.h"

int main()
{
	int a[] = { 60,70,65,50,32,100 };

	Heap hp;
	HeapInit(&hp);
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		HeapPush(&hp, a[i]);
	}
	//printf("%d\n", HeapTop(&hp));
	//printf("%d\n", HeapSize(&hp));
	int i;
	while(!HeapEmpty(&hp))
	{
		HeapPop(&hp);
		printf("%d\n", HeapTop(&hp));

	}
	
	HeapDestory(&hp);

	return 0;
}