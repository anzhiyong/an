#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//....
//	//....
//	p = NULL;
//
//	//...
//	//...
//	if (p != NULL)
//	{
//		//....
//	}
//	return 0;
//}
//#define NDEBUG
#include <assert.h>
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//....
//	//....
//	p = NULL;
//	int b = 5;
//	assert(p != NULL);
//	//assert(b == 5);
//
//	printf("%d\n", *p);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用函数
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}


#include <string.h>
#include <assert.h>

//size_t --- unsigned int

//size_t my_strlen(const char* s)
//{
//	size_t count = 0;
//	assert(s != NULL);
//
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);//数组名是数组是首元素的地址
//
//	printf("%zd\n", len);
//
//	return 0;
//}

//
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int*pa, int*pb)
//{
//	int z = 0;
//	z = *pa;  //z = a;
//	*pa = *pb;//a = b
//	*pb = z;  //b = z
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//交换a和b的值
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	//Swap1(a, b);//传值调用
//	Swap2(&a, &b);//传址调用
//
//	printf("交换后：a=%d b=%d\n", a, b);
//	
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	*pa = 20;
//	printf("%d\n", a);
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//
//	printf("%d\n", sizeof(arr));
//	//
//	//1.sizeof内部单独放一个数组名的时候，数组名表示的是整个数组，计算的是整个数组的大小
//	//单位是字节
//	//2. &数组名，数组名表示的是整个数组，取出的是整个数组的地址
//	//除此之外，遇到的所有数组名都是数组首元素的地址
//	//
//	printf("%p\n", &arr[0]);//int*
//	printf("%p\n", &arr[0]+1);//+4
//
//	printf("%p\n", arr);//int*
//	printf("%p\n", arr+1);//+4
//
//	printf("%p\n", &arr);//?
//	printf("%p\n", &arr+1);//+40
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	//p <==> arr
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//scanf("%d", &arr[i]);
//		//scanf("%d", p + i);
//		scanf("%d", arr + i);
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", i[arr]);//*(i+arr)-->*(arr+i)-->arr[i]
//		//2+3-->3+2
//		printf("%d ", arr[i]);
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(arr + i));
//		//arr[i] == *(arr+i)
//		//*(i+arr) == i[arr]
//		//p[i] == *(p+i)
//		//
//	}
//
//	return 0;
//}
//
//
//void test(int arr[])//int* arr
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);//?
//}
//
//void test(int* arr)
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);//?
//}

//void Print(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//arr[i] == *(arr+i)
//	}
//}
//
//void Print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr+i));//arr[i] == *(arr+i)
//	}
//}
//
//int main()
//{
//	//数组传参的时候，传递的是并非是数组
//	//传递的是数组首元素的地址
//	int arr[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//test(arr);//这里的数组名就是数组首元素的地址
//	Print(arr, sz);//降级
//
//	return 0;
//}
//

int count = 0;

void BubbleSort(int arr[], int sz)
{
	//躺数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设已经有序
		//一趟冒泡排序的过程
		int j = 0;
		for (j=0; j<sz-1-i; j++)
		{
			count++;
			//一对元素的比较
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

void PrintArr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = { 9,0,1,2,3,4,5,6,7,8};//降序

	//我们想把数组进行排序，排为升序
	int sz = sizeof(arr) / sizeof(arr[0]);

	BubbleSort(arr, sz);

	PrintArr(arr, sz);
	printf("\ncount = %d\n", count);
	return 0;
}

