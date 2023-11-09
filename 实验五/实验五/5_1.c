#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int t;
	int i;
	int a[5];
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 5 / 2; i++) {
		t = a[i];
		a[i] = a[5 - i - 1];
		a[5 - i - 1] = t;
	}
	for (i = 0; i < 5; i++)
		printf("%5d", a[i]);
	return 0;
}