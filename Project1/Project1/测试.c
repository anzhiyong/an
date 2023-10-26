#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h> 
//int main() {
//	char n;
//	while ((n = getchar()) != EOF) {
//		if (n >= 'A' && n <= 'Z' || n >= 'a' && n <= 'z') {
//			printf("是字母!\n");
//		}
//		else {
//			printf("不是字母！\n");
//		}
//		getchar();
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	char cc;
	scanf("%c", &cc);
	if (cc >= 'A' && cc <= 'Z' || cc>='a' && cc <= 'z')
		printf("是字母");
	else
		printf("不是字母");

}
