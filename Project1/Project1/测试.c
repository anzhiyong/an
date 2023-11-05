#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main() {
	int i = 0, a = 0;
	while (i < 40) {
		for (;;) {
			if ((i % 10) == 0)
				break;
			else i--;
		}
		i += 11;
		a += i;
	}
	printf("%d", a);
}


