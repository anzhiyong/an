#define _CRT_SECURE_NO_WARNINGS
////����һ��3 * 4���͵Ķ�ά����a, �Ӽ����ϸ����鸳ֵ��
//// ������Ԫ�ص�ֵ�������ڵ��кź��кš�
//#include<stdio.h>
//int main()
//{
//	int a[3][4];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//			scanf("%d", &a[i][j]);
//	}
//	int max = a[0];
//	int k=0, g=0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (a[i][j] >max )
//			{
//				max = a[i][j];
//				k = i;
//				g = j;
//			}
//				
//		}
//	}
//	printf("���ֵΪ%d,������Ϊ%d,��Ϊ%d", max, k, g);
//
//}



//��ð�����򷨶�10��������������
// (��ʾ:����һά������д�ŴӼ��̽��յ�10������)
//#include<stdio.h>
//int main()
//{
//	int a[10];
//	int i, j, temp;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	//ð������
//	for (i = 0; i < 10; i++)
//	{
//		for (j = i+1; j < 10; j++)
//		{
//			if (a[i] > a[j])
//			{
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%5d", a[i]);
//	}
//	
//}


//��һ�������е�ֵ���������´�š�
// ���磺ԭ��˳��Ϊ8��6��5��4��1��Ҫ���Ϊ1��4��5��6��8��
//#include<stdio.h>
//
//int main() {
//	int t;
//	int i;
//	int n;
//	scanf("%d", &n);
//	int a[n];
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < n / 2; i++) {
//		t = a[i];
//		a[i] = a[n - i - 1];
//		a[n - i - 1] = t;
//	}
//	for (i = 0; i < n; i++)
//		printf("%5d", a[i]);
//	return 0;
//}



//�Ӽ��̽���һ���ַ����Իس���Ϊ��������
// Ҫ��ֱ�ͳ�Ƴ�����Ӣ�Ĵ�д��ĸ��Сд��ĸ�����֣��ո������ַ��ĸ�����
#include<stdio.h>
int main()
{
	char ch;
	int d=0;
	int x=0;
	int sum=0;
	int other=0;
	int flag;
	while ((ch = getchar()) != '\n')
	{
		flag = 1;
		if (ch >= 'A' && ch <= 'Z')
		{
			d++;
			flag = 0;
		}
		if (ch >= 'a' && ch <= 'z')
		{
			x++;
			flag = 0;
		}
		if (ch >= '0' && ch <= '9')
		{
			sum++;
			flag = 0;
		}
		if (flag)
		{
			other++;
		}
	}
	printf("��д��ĸ%d,Сд��ĸ%d,����%d,�����ַ�%d", d, x, sum, other);
}