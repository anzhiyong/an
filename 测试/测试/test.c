#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[3][4];
//	int i, j, row, cow;
//	for (i = 0; i < 3;i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int max = arr[0][0];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				row = i;
//				cow = j;
//			}
//		}
//	}
//	printf("最大值%d行%d列%d", max, row, cow);
//}


//void sort(int arr[], int sz)  //冒泡
//{
//	int i,j;
//	int tem=0;
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 4,45,3,2,4,2,1,6,7,4 };
//	sort(arr, 10);
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int main()
//{
//	int i=10,j=2;
//	;
//	printf("%d", i*= j + 8);
//}

//逆序
//void nixu(int arr[], int sz)
//{
//	int i = 0, j = sz - 1;
//	while (i < j)
//	{
//		int tem;
//		tem = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tem;
//		i++;
//		j--;
//	}
//}
//int main()
//{
//	int arr[5] = { 8,6,5,4,1 };
//	int i;
//	nixu(arr, 5);
//	for (i = 0; i < 5; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//}
//#include<stdlib.h>
//int* getConcatenation(int* nums, int numsSize, int* returnSize) 
//{
//	*returnSize = 2 * numsSize;
//	nums = (int*)realloc(nums, sizeof(int) * numsSize * 2);
//	int i = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		nums[numsSize + i] = nums[i];
//	}
//	return nums;
//}

#include <stdio.h>  

int count_squares(int l, int r) {
    int count = 0;
    for (int i = l; i <= r; i++) {
        if (i * i <= r) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, l, r;
    int arr[100];
    do {
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            scanf("%d,%d", &l, &r);
            arr[i] = count_squares(l, r);
        }
        n--;
    } while (n);
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}