// #include <stdio.h>  
  
// int main() {  
//     int score;  
//     char grade;  
  
//     // ��ʾ�û�����ɼ�  
//     printf("������ɼ�: ");  
//     scanf("%d", &score);  
  
//     // �жϳɼ��ȼ�  
//     if (score >= 90) {  
//         grade = 'A';  
//     } else if (score >= 80) {  
//         grade = 'B';  
//     } else if (score >= 70) {  
//         grade = 'C';  
//     } else if (score >= 60) {  
//         grade = 'D';  
//     } else {  
//         grade = 'E';  
//     }  
  
//     // ����ɼ��ȼ�  
//     printf("�ɼ��ȼ���: %c\n", grade);  
  
//     return 0;  
// }

// #include <stdio.h>  
// #include <stdlib.h>  
  
// int main() {  
//     double data1, data2;  
//     char op;  
  
//     // ��ʾ�û���������  
//     printf("���������ݣ���ʽ��data1 op data2����");  
//     if (scanf("%lf %c %lf", &data1, &op, &data2) != 3) {  
//         // �����ʽ����ȷ  
//         printf("Error.\n");  
//         return 1;  
//     }  
  
//     // ������뻺�����еĻ��з��������ַ�  
//     while (getchar() != '\n');  
  
//     switch (op) {  
//         case '+':  
//             printf("%.2lf\n", data1 + data2);  
//             break;  
//         case '-':  
//             printf("%.2lf\n", data1 - data2);  
//             break;  
//         case '*':  
//             printf("%.2lf\n", data1 * data2);  
//             break;  
//         case '/':  
//             if (data2 == 0) {  
//                 // ��������Ϊ0  
//                 printf("Error.\n");  
//             } else {  
//                 printf("%.2lf\n", data1 / data2);  
//             }  
//             break;  
//         default:  
//             // ���������ȷ  
//             printf("Error.\n");  
//             break;  
//     }  
  
//     return 0;  
// }


#include <stdio.h>  
  
int main() {  
    int num;  
    printf("������һ��������");  
    scanf("%d", &num);  
  
    int divisibleBy3 = (num % 3 == 0);  
    int divisibleBy5 = (num % 5 == 0);  
    int divisibleBy7 = (num % 7 == 0);  
  
    if (divisibleBy3 && divisibleBy5 && divisibleBy7) {  
        printf("��ͬʱ��3��5��7������\n");  
    } else if ((divisibleBy3 && divisibleBy5) || (divisibleBy3 && divisibleBy7) || (divisibleBy5 && divisibleBy7)) {  
        if (divisibleBy3 && divisibleBy5) {  
            printf("�ܱ�3��5������\n");  
        } else if (divisibleBy3 && divisibleBy7) {  
            printf("�ܱ�3��7������\n");  
        } else if (divisibleBy5 && divisibleBy7) {  
            printf("�ܱ�5��7������\n");  
        }  
    } else if (divisibleBy3 || divisibleBy5 || divisibleBy7) {  
        if (divisibleBy3) {  
            printf("�ܱ�3������\n");  
        } else if (divisibleBy5) {  
            printf("�ܱ�5������\n");  
        } else if (divisibleBy7) {  
            printf("�ܱ�7������\n");  
        }  
    } else {  
        printf("���ܱ�3��5��7��һ��������\n");  
    }  
  
    return 0;  
}