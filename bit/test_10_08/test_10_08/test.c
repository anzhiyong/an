#define _CRT_SECURE_NO_WARNINGS 1


//写代码了
//写一个C语言程序，在屏幕上打印hehe


//编译+链接+运行  ctrl+F5
//我的电脑上ctrl+f5,可以使用Fn+ctrl+f5
//Fn 是一个辅助功能键
//F1,F2,F3,.....F12
//Fn+F1 - F1原来的意思
//Fn+F2 - F2原来的意思
//....


//
//#include <stdio.h>
//
//int main()
//{
//	printf("hehe");
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	printf("hehe");
//	return 0;
//}

//旧式的写法 - 不推荐
//void main()
//{
//	 //...
//}

//void 是表示main函数不接受参数
//int main(void)
//{
//	//...
//	return 0;
//}

//其实main函数也是可以有参数，参数是有特殊的意义的
//
//int main(int argc, char* argv[], char* envp[])
//{
//
//	return 0;
//}

#include <stdio.h>
//stdio standard input output
//标准输入输出头文件

//int main()
//{
//	//printf是一个函数
//	//库函数
//	//功能：就是在屏幕上打印信息
//	//
//	//scanf - 输入
//	printf("hello world\n");//输出
//	printf("你好，C语言\n");//输出
//
//
//	return 0;
//}

//注释选中行：ctrl+k+c
//取消注释：ctrl+k+u



//int main()
//{
//	//占位符
//	//%d - 整型
//	//%c  - 字符
//	//%f  - 浮点数（小数）
//
//	printf("%d\n", 100);
//	printf("%c\n", 'q');
//	printf("%f\n", 3.14f);
//
//	return 0;
//}
//
//int main()
//{
//	int num = 10;
//	//int char;//err
//	return 0;
//}
//

//aq@#!

//int main()
//{
//	printf("%c\n", 'A');
//	printf("%c\n", 65);
//
//
//	return 0;
//}

//
//int main()
//{
//	//32~127
//	int i = 0;
//	//产生32~127的数值
//	for (i=32; i<=127; i++)
//	{
//		printf("%c ", i);//将i中的数值当做ASCII码值，直接打印对应的字符
//	}
//
//	return 0;
//}
//
//

//
//a b c d e @ # !
//'a' 'b'
//

//"abcdef";
//"hehe";

//%s - 字符串
//
//int main()
//{
//	//printf("hehe\n");
//	//printf("haha\n");
//	//printf("%s\n", "hello");
//
//	return 0;
//}

//字符串中有一个结束标志叫：\0
//int main()
//{
//	//char arr1[] = "abc";
//	//char arr2[] = {'a', 'b', 'c'};
//
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	printf("abc\0def");
//
//	return 0;
//}
//

//\n \0 是转义字符
//
//int main()
//{
//	// \n
//	// \0
//
//	return 0;
//}
//


int main()
{
	printf("abc\ndef");

	return 0;
}



