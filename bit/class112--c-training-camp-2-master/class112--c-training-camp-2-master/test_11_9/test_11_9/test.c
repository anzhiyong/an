#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 100;
//	int* pa = &a;
//	*pa = 0;
//	printf("%d\n", a);
//	return 0;
//}

//3. 指针变量类型的意义
//int main()
//{
//	//char* p1;
//	//int* p2;
//	//double* p3;
//
//	//ptr_t p;
//
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//
//	*pa = 0;
//
//	return 0;
//}
//
//
//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;//？pa这里能存放的下a的地址吗？
//
//	*pa = 0;
//
//	return 0;
//}
//

//%p 是专门用来打印地址的

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = (char*) &a;//int*
//
//	printf("pa = %p\n", pa);
//	printf("pc = %p\n", pc);
//
//	printf("pa+1=%p\n", pa + 1);
//	printf("pc+1=%p\n", pc + 1);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = &arr[0];
//
//	for (i = 0; i < 10; i++)
//	{
//		*p = 1;
//		//p = p + 1;
//		p++;
//	}
//	p = &arr[0];
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	char* p = &arr[0];
//
//	for (i = 0; i < 40; i++)
//	{
//		*p = 1;
//		//p = p + 1;
//		p++;
//	}
//
//	//p = &arr[0];
//
//	//for (i = 0; i < 40; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p++;
//	//}
//	return 0;
//}

//pointer

//int main()
//{
//	int a = 10;
//	char ch = 'w';
//
//	//int* pa = &a;
//	//char* pc = &a;//warning
//	void* pv = &a;//int*
//	void* pv2 = &ch;//char*
//
//	//*pv = 20;//err  void*类型的指针不能直接进行解引用操作的
//	//pv++;//err  void* 类型的指针也不能+-1的操作
//
//
//	return 0;
//}
//
//

//int main()
//{
//	//
//	const int a = 10;//a不能被修改了，但是a的本质还是变量，const仅仅是在语法上做了限制。所以我们习惯上叫a是常变量
//	a = 20;//修改-err
//	printf("a=%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	const int a = 10;
//	
//	//const 可以用来修饰指针
//	const int * pa = &a;
//	*pa = 0;//err
//	printf("%d\n", a);
//
//	return 0;
//}


//const 修饰指针的时候
//const可以放在*的左边
//const可以放在*的右边
//
//
//int main()
//{
//	const int a = 10;
//	int const*  p = &a;
//	//*p = 0;//
//	int b = 20;
//	p = &b;//ok
//	printf("a = % d\n", a);
//
//	return 0;
//}


//
//int main()
//{
//	const int a = 10;
//	const int * const p = &a;
//
//	*p = 0;//err
//
//	int b = 20;
//	p = &b;//ok
//	printf("a = % d\n", a);
//
//	return 0;
//}
//


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//使用指针打印数组的内容
//	int* p = &arr[0];
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p+=2;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//使用指针打印数组的内容
//	int * p = &arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));//p+i加的是i*sizeof(int)
//	}
//	//p = 0x0012ff40
//	//p+0 = 0x0012ff40
//	//p+1 = 0x0012ff44
//	//p+2 = 0x0012ff48
//	//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//使用指针打印数组的内容
//	int* p = &arr[9];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p - i));//p+i加的是i*sizeof(int)
//	}
//	return 0;
//}


//int main()
//{
//	//指针-指针 = 地址-地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%d\n", &arr[0] - &arr[9]);//9 - 指针-指针的绝对值是指针和指针之间的元素个数
//	//指针-指针运算的前提条件是：两个指针指向同一块空间
//
//	char ch[20] = {0};
//	printf("%d\n", &ch[0] - &arr[0]);//err
//
//	return 0;
//}

//
//指针-指针有什么用呢？
//

#include <stdio.h>
#include <string.h>

//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}

//int my_strlen(char* s)
//{
//	char* start = s;
//	while (*s != '\0')
//	{
//		s++;
//	}
//	return s - start;//指针-指针
//}


//int my_strlen(char* s)
//{
//	char* start = s;
//	while (*s)//\0的ASCII码值是0
//	{
//		s++;
//	}
//	return s - start;//指针-指针
//}
//
//int main()
//{
//	//strlen  求字符串的长度 - 统计的是\0前面出现的字符的个数
//
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}
//

//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	//使用while循环打印arr的内容
//	int*p = &arr[0];
//	//arr是数组名，数组名其实是数组首元素的地址，arr<==>&arr[0]
//	while (p < arr + sz)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//


//int main()
//{
//	int* ptr;//野指针
//	*ptr = 20;//非法访问内存了
//
//
//	//printf("%p\n", ptr);
//
//	return 0;
//}
//


//int main()
//{
//	int arr[5] = { 0 };
//	//1 1 1 1 1 1 1 1 1 1
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*p = 1;
//		p++;
//	}
//
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	//...
//	return &a;
//}
//int main()
//{
//	int*p = test();
//
//	printf("hehe\n");//为什么这里加了一句代码，*p的值就变了
//
//	printf("%d\n", *p);
//
//	return 0;
//}
//
//


int main()
{
	int* p = NULL;
	*p = 200;

	return 0;
}














