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


// #include <stdio.h>  
  
// int main() {  
//     int num;  
//     printf("请输入一个整数：");  
//     scanf("%d", &num);  
  
//     int divisibleBy3 = (num % 3 == 0);  
//     int divisibleBy5 = (num % 5 == 0);  
//     int divisibleBy7 = (num % 7 == 0);  
  
//     if (divisibleBy3 && divisibleBy5 && divisibleBy7) {  
//         printf("能同时被3，5，7整除。\n");  
//     } else if ((divisibleBy3 && divisibleBy5) || (divisibleBy3 && divisibleBy7) || (divisibleBy5 && divisibleBy7)) {  
//         if (divisibleBy3 && divisibleBy5) {  
//             printf("能被3和5整除。\n");  
//         } else if (divisibleBy3 && divisibleBy7) {  
//             printf("能被3和7整除。\n");  
//         } else if (divisibleBy5 && divisibleBy7) {  
//             printf("能被5和7整除。\n");  
//         }  
//     } else if (divisibleBy3 || divisibleBy5 || divisibleBy7) {  
//         if (divisibleBy3) {  
//             printf("能被3整除。\n");  
//         } else if (divisibleBy5) {  
//             printf("能被5整除。\n");  
//         } else if (divisibleBy7) {  
//             printf("能被7整除。\n");  
//         }  
//     } else {  
//         printf("不能被3，5，7任一个整除。\n");  
//     }  
  
//     return 0;  
// }

// #include <stdio.h>  
  
// int main() {  
//     int a, b, c;  
//     int max;  
  
//     // 从用户那里获取三个整数的输入  
//     printf("请输入三个整数a, b, c: ");  
//     scanf("%d %d %d", &a, &b, &c);  
  
//     // 初始假设第一个数a是最大的  
//     max = a;  
  
//     // 使用if-else语句来比较并找出最大的数  
//     if (b > max) {  
//         max = b; // 如果b比max大，则更新max为b  
//     }  
//     if (c > max) {  
//         max = c; // 如果c比max大，则更新max为c  
//     }  
  
//     // 输出最大的数  
//     printf("三个数中的最大数是: %d\n", max);  
  
//     return 0;  
// }



// #include <stdio.h>  
// #include <ctype.h> // 包含isalpha和isdigit函数  
  
// int main() {  
//     char inputChar;  
  
//     // 从键盘接收一个字符  
//     printf("请输入一个字符：");  
//     scanf("%c", &inputChar);  
  
//     // 检查字符是否为字母  
//     if (isalpha(inputChar)) {  
//         // 如果是字母，输出其对应的ASCII码  
//         printf("输入的字符是字母，其ASCII码是：%d\n", inputChar);  
//     } else if (isdigit(inputChar)) {  
//         // 如果是数字，按原样输出  
//         printf("输入的字符是数字：%c\n", inputChar);  
//     } else {  
//         // 如果既不是字母也不是数字，给出提示信息  
//         printf("输入错误！\n");  
//     }  
  
//     return 0;  
// }



// #include <stdio.h>  
  
// int main() {  
//     int a, b, c;  
//     int max;  
  
//     // 从键盘读取三个整数的值  
//     printf("请输入三个整数a, b, c: ");  
//     scanf("%d %d %d", &a, &b, &c);  
  
//     // 使用if-else语句比较三个数，找出最大的数  
//     max = a; // 初始假设a是最大的  
//     if (b > max) {  
//         max = b; // 如果b比max大，则max为b  
//     }  
//     if (c > max) {  
//         max = c; // 如果c比max大，则max为c  
//     }  
  
//     // 输出最大的数  
//     printf("三个数中最大的数是: %d\n", max);  
  
//     return 0;  
// }

// #include<stdio.h>
// //需要引入的文件
// //如提示运行通过，但解题失败，认真对比预期输出和实际输出之间的差异
// #include <stdio.h>
// #include <stdlib.h>

// int main(){
// 	int x, y;

// 	scanf("%d", &x);
// 	if(x < 1){
// 		y = x;
//     printf("y=x=%d\n", y);

// 	}
// 	else if(x >= 1 && x < 10){
// 		y = 2 * x -1;
//     printf("y=2*x-1=%d\n", y);
// 	}
// 	else{
// 		y = 3 * x - 11;
//     printf("y=3*x-11=%d\n", y);
// 	}


// 	return 0;
// }

// #include<stdio.h>
// //需要引入的文件
// //如提示运行通过，但解题失败，认真对比预期输出和实际输出之间的差异
// #include <stdio.h>  
  
// int main() {  
//     double num1, num2;  
//     double temp;  
  
//     // 从键盘读入两个实数  
//     scanf("%lf %lf", &num1, &num2);  
  
//     // 检查两个数的大小，并按从小到大的顺序交换它们  
//     if (num1 > num2) {  
//         temp = num1;  
//         num1 = num2;  
//         num2 = temp;  
//     }  
  
//     // 输出两个数，保留两位小数  
//     printf("%.2lf %.2lf\n", num1, num2);  
  
//     return 0;  
// }

// #include <stdio.h>  
// #include <ctype.h> // 包含isupper()和tolower()函数的头文件  
  
// int main() {  
//     char ch;  
  
//     // 从键盘读取一个字符  
//     printf("请输入一个字符：");  
//     scanf("%c", &ch);  
  
//     // 检查字符是否为大写字母  
//     if (isupper(ch)) {  
//         // 如果是大写字母，则转换为小写字母  
//         ch = tolower(ch);  
//         printf("转换后的小写字母是：%c\n", ch);  
//     } else {  
//         // 如果不是大写字母，则不转换  
//         printf("输入的字符不是大写字母，不转换。\n");  
//     }  
  
//     return 0;  
// }

