#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//p��ָ���������һ��ָ��
//	//int * *pp=&p;//pp�Ƕ���ָ��
//
//	//int** *ppp=&pp;//ppp������ָ�루�õĺ��٣�
//	//...
//	return 0;
//}
// 


#include<stdio.h>


//int main()
//{
//	int a = 10;
//	int* p = &a;//ȡ��a�ĵ�ַ
//	//p��ָ���������һ��ָ��
//	int** pp = &p;//pp�Ƕ���ָ��,����ָ��������������һ��ָ������ĵ�ַ
//
//	printf("%d\n", **pp);
//
//	return 0;
//}




//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* arr[3] = {arr1, arr2, arr3};//����ָ������
//
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%d ", *(arr + i));//arr[i] === *(arr+i)
//	}
//	return 0;
//}

//int main()
//{
//	//char ch = 'w';
//	//char* pc = &ch;//pc�����ַ�ָ��
//
//	const char* p = "abcdef";//���ǰ��ַ���abcdef\0�����p�У����ǰѵ�һ���ַ��ĵ�ַ�����p��
//	//printf("%c\n", *p);//
//	//1. ����԰��ַ�������Ϊһ���ַ����飬������������ǲ����޸ĵ�
//	//2. �������ַ��������ڱ��ʽ�е�ʱ������ֵ�ǵ�һ���ַ��ĵ�ַ
//
//	printf("%c\n", "abcdef"[3]);
//	printf("%c\n", p[3]);
//	//p[3] = 'q';//err
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}



//int main()
//{
//	int n = 100;
//	int* pn = &n;
//
//	char ch = 'w';
//	char* pch = &ch;
//
//	float f = 3.14f;
//	float* pf = &f;
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*parr)[10] = &arr;//ȡ����������ĵ�ַ
//
//	//parr ��������ָ��
//
//	return 0;
//}


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int* p1 = arr;

	int* p2 = &arr[0];

	int (*p3)[10] = &arr;//p3������ָ��
	//int (*)[10]   int (*)[10]
	//
	return 0;
}