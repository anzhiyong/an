#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	int K = 3;
//	if (K <= 0) 
//		printf("####"); 
//	else 
//		printf("&&&&");
//	
//	return 0;
//}

//int main()
//{
//	int a = 14, b = 15, x;
//	char c = 'A';
//	x = (a && b) && (c < 'B');
//	printf("%d", x);
//	return 0;
//}

//int main()
//{
//	int x = 1, y = 1;
//	
//	printf("%d", (!x || y--));
//}


//int main() {
//	int a, b, c = 246;
//	a = c / 100 % 9;
//	b = (-1) && (-1);
//	printf("%d;%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = -1, b = 4, k;
//	k = (a++ <= 0) && (!(b-- <= 0));
//	printf("%d%d%d\n", k, a, b);
//
//}

//int main()
//{
//	int a = 9, b = 8, c = 7, x = 1;
//	if (a > 7) if (b > 8) if (c > 9) x = 2; else x = 3;
//	printf("%d", x);
//}

//#include <stdio.h>
//void main() {
//    int a = 2, b = 7, c = 5;
//    switch (a > 0) {
//    case 1: switch (b < 0) {
//    case 1: printf("@"); break;
//    case 2: printf("!"); break;
//    }
//    case 0: switch (c == 5) {
//    case 1: printf("*"); break;
//    case 2: printf("#"); break;
//    default: printf("#"); break;
//    }
//    default: printf("&");
//    }
//    printf("\n");
//}


//void main() {
//    int a, b, c, s, w, t;
//    s = w = t = 0;
//    a = -1; b = 3; c = 3;
//    if (c > 0) s = a + b;
//    if (a <= 0)
//    {
//        if (b > 0)
//            if (c <= 0) w = a - b;
//    }
//    else if (c > 0) w = a - b;
//    else t = c;
//    printf("% d % d % d", s, w, t);
//}


//void main() {
//    int a = 0, i;
//    scanf("%d", &i);
//    switch (i) {
//    case 0:
//    case 3:  a += 2;
//    case 1:
//    case 2:  a += 3;
//    default: a += 5;
//    }
//    printf("%d\n", a);
//}

//#include <stdio.h>
//void main()
//{
//    float x, y, r;
//    char op;
//    scanf("%f%c%f", &x, &op, &y);
//    switch (op) {
//    case '+': r = x + y; break;
//    case '-': r = x + y; break;
//    case '*': r = x + y; break;
//    case '/': r = x / y;
//    }
//    printf("%f", r);
//}


//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a > 100)
//	{
//		printf("%d", a / 100);//百位以上数字
//	}
//	else
//	{
//		printf("%d", a + b);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int score;
//	scanf("%d", &score);
//	switch (score/10)
//	{
//	case 10:
//	case 9:printf("%c", 'A'); break;
//	case 8:printf("%c", 'B'); break;
//	case 7:printf("%c", 'C'); break;
//	case 6:printf("%c", 'D'); break;
//	case 5:
//	case 4:
//	case 3:
//	case 2:
//	case 1:
//	case 0:printf("%c", 'E'); break;
//	default:printf("错误");
//	}
//}

#include<stdio.h>
int main()
{
	int year, month, day,n;
	printf("请输入年份和月份");
	scanf("%d%d", &year, &month);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		n = 1;
	}
	else
	{
		n = 0;
	}
	switch (month)
	{
	case 1:day = 31; break;
	case 2:
		if (n = 1)
		{
			day = 29;
		}
		else
		{
			day = 28;
		}
		
		break;
	case 3:day = 31; break;
	case 4:day = 30; break;
	case 5:day = 31; break;
	case 6:day = 30; break;
	case 7:day = 31; break;
	case 8:day = 31; break;
	case 9:day = 30; break;
	case 10:day = 31; break;
	case 11:day = 30; break;
	case 12:day = 31; break;
	default :printf("错误");
	}
	printf("%d", day);
}


