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

//3. ָ��������͵�����
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
//	char* pa = &a;//��pa�����ܴ�ŵ���a�ĵ�ַ��
//
//	*pa = 0;
//
//	return 0;
//}
//

//%p ��ר��������ӡ��ַ��

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
//	//*pv = 20;//err  void*���͵�ָ�벻��ֱ�ӽ��н����ò�����
//	//pv++;//err  void* ���͵�ָ��Ҳ����+-1�Ĳ���
//
//
//	return 0;
//}
//
//

//int main()
//{
//	//
//	const int a = 10;//a���ܱ��޸��ˣ�����a�ı��ʻ��Ǳ�����const���������﷨���������ơ���������ϰ���Ͻ�a�ǳ�����
//	a = 20;//�޸�-err
//	printf("a=%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	const int a = 10;
//	
//	//const ������������ָ��
//	const int * pa = &a;
//	*pa = 0;//err
//	printf("%d\n", a);
//
//	return 0;
//}


//const ����ָ���ʱ��
//const���Է���*�����
//const���Է���*���ұ�
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
//	//ʹ��ָ���ӡ���������
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
//	//ʹ��ָ���ӡ���������
//	int * p = &arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));//p+i�ӵ���i*sizeof(int)
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
//	//ʹ��ָ���ӡ���������
//	int* p = &arr[9];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p - i));//p+i�ӵ���i*sizeof(int)
//	}
//	return 0;
//}


//int main()
//{
//	//ָ��-ָ�� = ��ַ-��ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%d\n", &arr[0] - &arr[9]);//9 - ָ��-ָ��ľ���ֵ��ָ���ָ��֮���Ԫ�ظ���
//	//ָ��-ָ�������ǰ�������ǣ�����ָ��ָ��ͬһ��ռ�
//
//	char ch[20] = {0};
//	printf("%d\n", &ch[0] - &arr[0]);//err
//
//	return 0;
//}

//
//ָ��-ָ����ʲô���أ�
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
//	return s - start;//ָ��-ָ��
//}


//int my_strlen(char* s)
//{
//	char* start = s;
//	while (*s)//\0��ASCII��ֵ��0
//	{
//		s++;
//	}
//	return s - start;//ָ��-ָ��
//}
//
//int main()
//{
//	//strlen  ���ַ����ĳ��� - ͳ�Ƶ���\0ǰ����ֵ��ַ��ĸ���
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
//	//ʹ��whileѭ����ӡarr������
//	int*p = &arr[0];
//	//arr������������������ʵ��������Ԫ�صĵ�ַ��arr<==>&arr[0]
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
//	int* ptr;//Ұָ��
//	*ptr = 20;//�Ƿ������ڴ���
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
//	printf("hehe\n");//Ϊʲô�������һ����룬*p��ֵ�ͱ���
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














