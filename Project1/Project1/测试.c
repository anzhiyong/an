#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    float x, y, r;
    char op;
    scanf(¡° % f % c % f¡±, &x, &op, &y);
    switch (op) {
    case ¡® + ¡¯: r = x + y; break;
    case ¡® - ¡¯: r = x + y; break;
    case ¡®* ¡¯: r = x + y; break;
    case ¡® / ¡¯: r = x / y;
    }
    printf(¡° % f¡±, r);
}
