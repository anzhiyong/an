#define _CRT_SECURE_NO_WARNINGS 1

#include"Heap.h"

// 堆的构建
void HeapInit(Heap* hp)
{
	assert(hp);

	hp->a = NULL;
	hp->size = 0;
	hp->capacity = 0;
}
// 堆的销毁
void HeapDestory(Heap* hp)
{
	assert(hp);
	hp->a = NULL;
	hp->size = 0;
	hp->capacity = 0;
}

void Swap(HPDataType* px, HPDataType* py)
{
	HPDataType tmp = *px;
	*px = *py;
	*py = tmp;
}

void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void AdjustDown(HPDataType* a, int n, int parent)
{
	int child = parent * 2 + 1;//假设左孩子
	if (a[child] > a[child + 1])
	{
		child++;
	}
	while (child <n)
	{
		if (a[parent] < a[child])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

// 堆的插入
void HeapPush(Heap* hp, HPDataType x)
{
	assert(hp);
	if (hp->size == hp->capacity)
	{
		size_t newCapacity = hp->capacity == 0 ? 4 : hp->capacity * 2;
		HPDataType* tem = realloc(hp->a, sizeof(HPDataType) * newCapacity);
		if (tem == NULL)
		{
			perror("realloc:error");
			return;
		}
		hp->a = tem;
		hp->capacity = newCapacity;
	}
	hp->a[hp->size] = x;
	hp->size++;
	

	AdjustDown(hp->a, hp->size-1 ,0);
	
}
// 堆的删除
void HeapPop(Heap* hp)
{
	assert(hp);
	assert(hp->size > 0);
	Swap(&hp->a[0], &hp->a[hp->size - 1]);
	hp->size--;

	AdjustDown(hp->a,hp->size, 0);
}
// 取堆顶的数据
HPDataType HeapTop(Heap* hp)
{
	assert(hp);
	return hp->a[0];
}
// 堆的数据个数
int HeapSize(Heap* hp)
{
	assert(hp);
	return hp->size;
}
// 堆的判空
bool HeapEmpty(Heap* hp)
{
	assert(hp);
	return hp->size == 0;
}
