#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 1,b = 2,c = 3,d = 4,e = 5;
//	int func(int x, int y);
//	printf("%d\n",func((a + b,b + c,c + a),(d + e)));
//	return 0;
//}
//int func(int x, int y)
//{ 
//	return(x + y); 
//}

//#include<stdio.h>
//int main()
//{
//	/*int a[10] = { 1,2,3 };
//	printf("%d ", *(a + 3));*/
//	int a[2][4]={1,2,3,4,5,6,7,8}, (*p)[4] = a;
//	printf("%d ", (*p)[6]);
//}

//#include <stdio.h>
//int year(int n) {
//	int a;
//	if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
//		a = 1;
//	else a = 0;
//	return 0;
//}
//main() {
//	int s, n;
//	printf("��������ݣ�");
//	scanf("%d", &n);
//	s = year(n);
//	if (s == 1) printf("%d�������ꡣ", n);
//	if (s == 0) printf("%d�겻�����ꡣ", n);
//}

//#include<stdio.h>
//void  main() {
//	pstar(10);
//	printf("��ӭʹ�ñ�����\n");
//	pstar(20);
//}
//pstar(int num) {
//	int i;
//	for (i = 1; i <= num; i++)
//		printf("*");
//	printf("\n");
//}

//#include<stdio.h>
//void hello() {
//	printf("Hello,world \n");
//}
//main() {
//	hello();
//}



//
//int Max(int x, int y) {
//	int max = (x > y) ? x : y;
//	return max;
//}
//int main() {
//	int a, b, c, max;
//	scanf("%d,%d,%d", &a, &b, &c);
//	max = Max(a, b);
//	max = Max(max, c);
//	printf("max = %d\n", max);
//	return 0;
//}

//#include <stdio.h>
//int sub(int* s)
//{
//	static int t = 0;
//	t = *s + t;
//	return t;
//}
//void main()
//{
//	int i, k;
//	for (i = 0; i < 4; i++)
//	{
//		k = sub(&i);
//		printf("%3d", k);
//	}
//	printf("\n");
//}


//#include<stdio.h>
//void  main() {
//    int x, y, z, t, m;
//    scanf("%d,%d,%d" , &x, &y, &z);
//    t = max(x, y);
//    m = max(t, z);
//    printf("% d", m);
//}
//max(int a, int b) {
//    if (a > b) return(a);
//    else return(b);
//}


//#include<stdio.h>
//int s(int* p) {
//    int sum = 10;
//    sum = sum + *p;
//    return(sum);
//}
//void main() {
//    int a = 0, i, * p, sum;
//    p = &a;
//    scanf("%d", p);
//    sum = s(p);
//    printf("sum=%d\n", sum);
//}

//#include<stdio.h>
//int is_prime(int n)
//{
//	if (n == 1 || n < 1)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (is_prime(a))
//	{
//		printf("%d������",a);
//	}
//	else
//	{
//		printf("%d��������", a);
//	}
//	return 0;
//}


#include<stdio.h>
void displayMenu()
{
	printf("��ӭ���������\n");
	printf("***********************************\n");
	printf("*                1.�ӷ�            *\n");
	printf("*                2.����            *\n");
	printf("*                3.�˷�            *\n");
	printf("*                4.����            *\n");
	printf("*                5.����            *\n");
	printf("*                6.�׳�            *\n");
	printf("*                7.�ۼ�            *\n");
	printf("*                8.����            *\n");

}
int main()
{
	int n;
	char input;
	do
	{
		printf("�Ƿ���������,y/n(�ǻ��)��\n");
		scanf("%c", &input);
		switch (input)
		{
		case 'y':displayMenu(); break;
		case 'n':exit(0);
		default :printf("�����д�������������\n");
		}
		getchar();
	} while (input != 'y' && input != 'n');
	return 0;
}



