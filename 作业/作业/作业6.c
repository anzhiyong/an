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
#include<stdio.h>
int main()
{
	int a[10];
	int i, j, temp;
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}
	//ð������
	for (i = 0; i < 10; i++)
	{
		for (j = i+1; j < 10; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%5d", a[i]);
	}
	
}