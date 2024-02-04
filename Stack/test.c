#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

int main()
{
	Stack st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPop(&st);


	int ret = StackSize(&st);
	printf("%d\n", ret);
	StackDestroy(&st);
	return 0;
}