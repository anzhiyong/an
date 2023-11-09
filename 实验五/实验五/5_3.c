#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
main()
{
    int a[5], b[5], i;
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for (i = 1; i < 5; i++)
        b[i] = a[i] + a[i - 1];
    for (i = 1; i < 5; i++)
    {
        printf("%3d", b[i]);
        if (i % 3 == 0)
            printf("\n");
    }
}
