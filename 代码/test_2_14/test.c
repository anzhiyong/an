// #include <stdio.h>  
  
// int main() {  
//     int score;  
//     char grade;  
  
//     // 提示用户输入成绩  
//     printf("请输入成绩: ");  
//     scanf("%d", &score);  
  
//     // 判断成绩等级  
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
  
//     // 输出成绩等级  
//     printf("成绩等级是: %c\n", grade);  
  
//     return 0;  
// }

// #include <stdio.h>  
// #include <stdlib.h>  
  
// int main() {  
//     double data1, data2;  
//     char op;  
  
//     // 提示用户输入数据  
//     printf("请输入数据（格式：data1 op data2）：");  
//     if (scanf("%lf %c %lf", &data1, &op, &data2) != 3) {  
//         // 输入格式不正确  
//         printf("Error.\n");  
//         return 1;  
//     }  
  
//     // 清除输入缓冲区中的换行符或其他字符  
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
//                 // 除数不能为0  
//                 printf("Error.\n");  
//             } else {  
//                 printf("%.2lf\n", data1 / data2);  
//             }  
//             break;  
//         default:  
//             // 运算符不正确  
//             printf("Error.\n");  
//             break;  
//     }  
  
//     return 0;  
// }


#include <stdio.h>  
  
int main() {  
    int num;  
    printf("请输入一个整数：");  
    scanf("%d", &num);  
  
    int divisibleBy3 = (num % 3 == 0);  
    int divisibleBy5 = (num % 5 == 0);  
    int divisibleBy7 = (num % 7 == 0);  
  
    if (divisibleBy3 && divisibleBy5 && divisibleBy7) {  
        printf("能同时被3，5，7整除。\n");  
    } else if ((divisibleBy3 && divisibleBy5) || (divisibleBy3 && divisibleBy7) || (divisibleBy5 && divisibleBy7)) {  
        if (divisibleBy3 && divisibleBy5) {  
            printf("能被3和5整除。\n");  
        } else if (divisibleBy3 && divisibleBy7) {  
            printf("能被3和7整除。\n");  
        } else if (divisibleBy5 && divisibleBy7) {  
            printf("能被5和7整除。\n");  
        }  
    } else if (divisibleBy3 || divisibleBy5 || divisibleBy7) {  
        if (divisibleBy3) {  
            printf("能被3整除。\n");  
        } else if (divisibleBy5) {  
            printf("能被5整除。\n");  
        } else if (divisibleBy7) {  
            printf("能被7整除。\n");  
        }  
    } else {  
        printf("不能被3，5，7任一个整除。\n");  
    }  
  
    return 0;  
}