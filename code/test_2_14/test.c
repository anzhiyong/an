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

// #include <stdio.h>  
  
// int main() {  
//     int num1, num2;  
  
//     // ���û���ȡ��������  
//     printf("�����������������ÿո�ָ�����");  
//     scanf("%d %d", &num1, &num2);  
  
//     // ���num1�Ƿ�������num2  
//     if (num2 % num1 == 0) {  
//         printf("%d �ܱ� %d ������\n", num2, num1);  
//     } else {  
//         printf("%d ���ܱ� %d ������\n", num2, num1);  
//     }  
  
//     return 0;  
// }


// #include <stdio.h>  
// #include <ctype.h> // ����tolower()������ͷ�ļ�  
  
// int main() {  
//     char ch;  
  
//     // ���û���ȡһ���ַ�  
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

// #include <stdio.h>  
// #include <ctype.h> // ����isalpha()��isdigit()������ͷ�ļ�  
  
// int main() {  
//     char ch;  
  
//     // �Ӽ��̶�ȡһ���ַ�  
//     printf("������һ���ַ���");  
//     scanf("%c", &ch);  
  
//     // ����ַ��Ƿ�����ĸ  
//     if (isalpha(ch)) {  
//         // �������ĸ��������Ӧ��ASCII��  
//         printf("�ַ� '%c' ��Ӧ��ASCII���ǣ�%d\n", ch, ch);  
//     }  
//     // ����ַ��Ƿ�������  
//     else if (isdigit(ch)) {  
//         // ��������֣���ԭ�����  
//         printf("�ַ� '%c' ��һ�����֣���ԭ�������%c\n", ch, ch);  
//     }  
//     // ����Ȳ�����ĸҲ��������  
//     else {  
//         // �����ʾ��Ϣ  
//         printf("�������\n");  
//     }  
  
//     return 0;  
// }

// #include <stdio.h>  
  
// int main() {  
//     int a, b, c, temp;  
  
//     // ���û���ȡ��������  
//     printf("�����������������ÿո�ָ�����");  
//     scanf("%d %d %d", &a, &b, &c);  
  
//     // �Ƚ�a��b�����a��b���򽻻����ǵ�ֵ  
//     if (a > b) {  
//         temp = a;  
//         a = b;  
//         b = temp;  
//     }  
  
//     // ����a��b�е�ֵҪô����ȷ�ģ�Ҫô�ǽӽ���ȷ�ģ�������Ҫ���c  
//     // �Ƚ�a��c�����a��c���򽻻����ǵ�ֵ  
//     if (a > c) {  
//         temp = a;  
//         a = c;  
//         c = temp;  
  
//         // �������ǿ����Ѿ�������a��b�����������Ҫ�ٴμ��a��b  
//         if (a > b) {  
//             temp = a;  
//             a = b;  
//             b = temp;  
//         }  
//     }  
  
//     // ���ڣ�b��c�е�ֵҪô����ȷ�ģ�Ҫô�ǽӽ���ȷ�ģ�����ֻ��Ҫ���b��c  
//     // �Ƚ�b��c�����b��c���򽻻����ǵ�ֵ  
//     if (b > c) {  
//         temp = b;  
//         b = c;  
//         c = temp;  
//     }  
  
//     // ���������ֵ  
//     printf("��С���������������ǣ�%d %d %d\n", a, b, c);  
  
//     return 0;  
// }


// #include <stdio.h>  
// #include <string.h>  
// #include <ctype.h>  
  
// int main() {  
//     char firstChar, secondChar;  
//     int matched = 0;  
  
//     // ���ڼ���Ӣ�ĵ�������  
//     char *weekdays[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};  
  
//     // ��ʾ�û������һ���ַ�  
//     printf("please input first character: ");  
//     scanf(" %c", &firstChar); // ע����%cǰ����һ���ո���������ǰ��Ŀհ��ַ�  
  
//     // ���ַ�ת��ΪСд������Ƚ�  
//     firstChar = tolower(firstChar);  
  
//     // �������ڼ����飬ƥ���һ���ַ�  
//     for (int i = 0; i < 7; ++i) {  
//         if (weekdays[i][0] == firstChar) {  
//             matched = 1; // ��ʾ�ҵ���ƥ������ڼ�  
//             printf("Matched first character for '%s'. ", weekdays[i]);  
  
//             // �������ֻ��һ���ַ�����ֱ�����  
//             if (strlen(weekdays[i]) == 1) {  
//                 printf("It's %s.\n", weekdays[i]);  
//                 break;  
//             }  
  
//             // ��ʾ�û�����ڶ����ַ�  
//             printf("please input second character: ");  
//             scanf(" %c", &secondChar); // ע����%cǰ����һ���ո���������ǰ��Ŀհ��ַ�  
//             secondChar = tolower(secondChar); // ���ַ�ת��ΪСд  
  
//             // ƥ��ڶ����ַ�  
//             if (weekdays[i][1] == secondChar) {  
//                 printf("It's %s.\n", weekdays[i]);  
//                 break;  
//             } else {  
//                 printf("Second character doesn't match for '%s'.\n", weekdays[i]);  
//             }  
//         }  
//     }  
  
//     // ���û���ҵ�ƥ������ڼ�  
//     if (!matched) {  
//         printf("Illegal input!\n");  
//     }  
  
//     return 0;  
// }




// #include<stdio.h>
 
// int main()
// {
//     int i=4,k=0,c=0;
//     char s[18];
//     scanf("%s",s);
//     while(s[i]){
//           if(s[i] == '-')break;
//           c = c*10 + s[i]-'0';
//           i++;
//     }
//     switch(c){
//            case   0:
//            case   1:printf("English Region\n");
//                     break;
//            case   2:printf("French Region\n");
//                     break;
//            case   4:printf("Japan\n");
//                     break;
//            case   7:printf("China\n");
//                     break;
//            case  89:printf("South Korea\n");
//                     break;
//            case 957:
//            case 986:printf("Taiwan\n");
//                     break;
//            case 962:
//            case 988:printf("Hong Kong\n");
//                     break;
//            default :printf("Bhutan\n");
//                     break;
//     }
    
//     return 0;
// }

// #include "stdio.h"
// int main() {
// // your code
//   double data1,data2;
//   char op;
//   scanf("%lf %c %lf",&data1,&op,&data2);
//   if(op == '/' && data2 == 0)
//   {
//     printf("Error.");
//     return 0;
//   }
//   switch (op)
//     {
//     case '+':
//         printf("%.2lf",data1+data2);
//         break;
//     case '-':
//         printf("%.2f",data1-data2);
//         break;
//     case '*':
//         printf("%.2f",data1*data2);
//         break;
//     case '/':
//         printf("%.2lf",data1/data2);
//         break;
//     default:
//         break;
//     }
//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>

int main()
{
    float p,w,s,d,f;
    int i;
    scanf("%f %f %f",&p,&w,&s);
    i = 0*(s<250)+1*(s>=250&&s<500)+2*(s>=500&&s<1000)+3*(s>=1000&&s<2000)+4*(s>=2000&&s<3000)+5*(s>=3000);
    switch(i)
    {
        case 0:d = 0.00;break;
        case 1:d = 0.02;break;
        case 2:d = 0.05;break;
        case 3:d = 0.08;break;
        case 4:d = 0.10;break;
        case 5:d = 0.15;break;
        default :;
    }
    f = p*w*s*(1-d);
    printf("%.2f\n",f);
    return 0;
}
