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


// #include <stdio.h>  
  
// int main() {  
//     int num;  
//     printf("������һ��������");  
//     scanf("%d", &num);  
  
//     int divisibleBy3 = (num % 3 == 0);  
//     int divisibleBy5 = (num % 5 == 0);  
//     int divisibleBy7 = (num % 7 == 0);  
  
//     if (divisibleBy3 && divisibleBy5 && divisibleBy7) {  
//         printf("��ͬʱ��3��5��7������\n");  
//     } else if ((divisibleBy3 && divisibleBy5) || (divisibleBy3 && divisibleBy7) || (divisibleBy5 && divisibleBy7)) {  
//         if (divisibleBy3 && divisibleBy5) {  
//             printf("�ܱ�3��5������\n");  
//         } else if (divisibleBy3 && divisibleBy7) {  
//             printf("�ܱ�3��7������\n");  
//         } else if (divisibleBy5 && divisibleBy7) {  
//             printf("�ܱ�5��7������\n");  
//         }  
//     } else if (divisibleBy3 || divisibleBy5 || divisibleBy7) {  
//         if (divisibleBy3) {  
//             printf("�ܱ�3������\n");  
//         } else if (divisibleBy5) {  
//             printf("�ܱ�5������\n");  
//         } else if (divisibleBy7) {  
//             printf("�ܱ�7������\n");  
//         }  
//     } else {  
//         printf("���ܱ�3��5��7��һ��������\n");  
//     }  
  
//     return 0;  
// }

// #include <stdio.h>  
  
// int main() {  
//     int a, b, c;  
//     int max;  
  
//     // ���û������ȡ��������������  
//     printf("��������������a, b, c: ");  
//     scanf("%d %d %d", &a, &b, &c);  
  
//     // ��ʼ�����һ����a������  
//     max = a;  
  
//     // ʹ��if-else������Ƚϲ��ҳ�������  
//     if (b > max) {  
//         max = b; // ���b��max�������maxΪb  
//     }  
//     if (c > max) {  
//         max = c; // ���c��max�������maxΪc  
//     }  
  
//     // ���������  
//     printf("�������е��������: %d\n", max);  
  
//     return 0;  
// }



// #include <stdio.h>  
// #include <ctype.h> // ����isalpha��isdigit����  
  
// int main() {  
//     char inputChar;  
  
//     // �Ӽ��̽���һ���ַ�  
//     printf("������һ���ַ���");  
//     scanf("%c", &inputChar);  
  
//     // ����ַ��Ƿ�Ϊ��ĸ  
//     if (isalpha(inputChar)) {  
//         // �������ĸ��������Ӧ��ASCII��  
//         printf("������ַ�����ĸ����ASCII���ǣ�%d\n", inputChar);  
//     } else if (isdigit(inputChar)) {  
//         // ��������֣���ԭ�����  
//         printf("������ַ������֣�%c\n", inputChar);  
//     } else {  
//         // ����Ȳ�����ĸҲ�������֣�������ʾ��Ϣ  
//         printf("�������\n");  
//     }  
  
//     return 0;  
// }



// #include <stdio.h>  
  
// int main() {  
//     int a, b, c;  
//     int max;  
  
//     // �Ӽ��̶�ȡ����������ֵ  
//     printf("��������������a, b, c: ");  
//     scanf("%d %d %d", &a, &b, &c);  
  
//     // ʹ��if-else���Ƚ����������ҳ�������  
//     max = a; // ��ʼ����a������  
//     if (b > max) {  
//         max = b; // ���b��max����maxΪb  
//     }  
//     if (c > max) {  
//         max = c; // ���c��max����maxΪc  
//     }  
  
//     // ���������  
//     printf("����������������: %d\n", max);  
  
//     return 0;  
// }

// #include<stdio.h>
// //��Ҫ������ļ�
// //����ʾ����ͨ����������ʧ�ܣ�����Ա�Ԥ�������ʵ�����֮��Ĳ���
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
// //��Ҫ������ļ�
// //����ʾ����ͨ����������ʧ�ܣ�����Ա�Ԥ�������ʵ�����֮��Ĳ���
// #include <stdio.h>  
  
// int main() {  
//     double num1, num2;  
//     double temp;  
  
//     // �Ӽ��̶�������ʵ��  
//     scanf("%lf %lf", &num1, &num2);  
  
//     // ����������Ĵ�С��������С�����˳�򽻻�����  
//     if (num1 > num2) {  
//         temp = num1;  
//         num1 = num2;  
//         num2 = temp;  
//     }  
  
//     // �����������������λС��  
//     printf("%.2lf %.2lf\n", num1, num2);  
  
//     return 0;  
// }

// #include <stdio.h>  
// #include <ctype.h> // ����isupper()��tolower()������ͷ�ļ�  
  
// int main() {  
//     char ch;  
  
//     // �Ӽ��̶�ȡһ���ַ�  
//     printf("������һ���ַ���");  
//     scanf("%c", &ch);  
  
//     // ����ַ��Ƿ�Ϊ��д��ĸ  
//     if (isupper(ch)) {  
//         // ����Ǵ�д��ĸ����ת��ΪСд��ĸ  
//         ch = tolower(ch);  
//         printf("ת�����Сд��ĸ�ǣ�%c\n", ch);  
//     } else {  
//         // ������Ǵ�д��ĸ����ת��  
//         printf("������ַ����Ǵ�д��ĸ����ת����\n");  
//     }  
  
//     return 0;  
// }

