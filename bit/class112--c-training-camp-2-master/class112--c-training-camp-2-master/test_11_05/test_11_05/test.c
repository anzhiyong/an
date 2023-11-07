#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int num = 10;//signed int num = 10;
//	//10是存放在整型变量num中，占4个字节 == 32bit位
//	//00000000000000000000000000001010  - 原码
//	//00000000000000000000000000001010  - 反码
//	//00000000000000000000000000001010  - 补码
//
//	int num2 = -10;
//	//-10是存放在整型变量num2中，占4个字节 == 32bit位
//	//10000000000000000000000000001010  - 原码
//	//11111111111111111111111111110101  - 反码
//	//11111111111111111111111111110110  - 补码
//
//
//	return 0;
//}
//
//
//1-1
//1+(-1)
//00000000000000000000000000000001   ---> 1的原码
//10000000000000000000000000000001   ---> -1的原码
//10000000000000000000000000000010   -> -2
//
//使用补码就可以
//00000000000000000000000000000001   ---> 1的补码
//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111 ----> -1的补码
//00000000000000000000000000000001
//00000000000000000000000000000000 ---> 0
//

//
//int main()
//{
//	int m = 10;
//	int n = m << 1;
//
//	printf("n = %d\n", n);
//	printf("m = %d\n", m);
//
//	return 0;
//}
//

//
//int main()
//{
//	int m = -10;
//	int n = m >> 1;
//	//10000000000000000000000000001010 
//	//11111111111111111111111111110101
//	//11111111111111111111111111110110
//	//n = m>>1
//	//11111111111111111111111111111011
//	//10000000000000000000000000000100
//	//10000000000000000000000000000101
//	//-5
//	printf("m = %d\n", m);
//	printf("n = %d\n", n);
//
//	return 0;
//}



//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	//按（2进制）位与
//	//计算规则：对应的二进制位进行与运算
//	//只要有0就是0，两个同时为1才是1
//	//00000000000000000000000000000011 --- 3的补码
//	//10000000000000000000000000000101 --- -5的原码
//	//11111111111111111111111111111010 反码
//	//11111111111111111111111111111011 --- -5的补码
//	//00000000000000000000000000000011 --- 3的补码
//	//00000000000000000000000000000011
//	printf("c = %d\n", c);
//	
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a | b;
//	//按（2进制）位或
//	//计算规则：对应的二进制位进行或运算
//	//只要有1就是1，两个同时为0才是0
//	//00000000000000000000000000000011 --- 3的补码
//	//10000000000000000000000000000101 --- -5的原码
//	//11111111111111111111111111111010 反码
//	//11111111111111111111111111111011 --- -5的补码
//	//00000000000000000000000000000011 --- 3的补码
//	//11111111111111111111111111111011
//	//
//	printf("c = %d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a ^ b;
//	//按（2进制）位异或
//	//计算规则：对应的二进制位进行异或运算
//	//相同为0，相异为1
//	// 
//	//00000000000000000000000000000011 --- 3的补码
//	//10000000000000000000000000000101 --- -5的原码
//	//11111111111111111111111111111010 反码
//	//11111111111111111111111111111011 --- -5的补码
//	//00000000000000000000000000000011 --- 3的补码
//	//11111111111111111111111111111000
//	//10000000000000000000000000000111
//	//10000000000000000000000000001000
//	//
//	printf("c = %d\n", c);
//
//	return 0;
//}

//~ - 按位取反

//int main()
//{
//	int a = 1;
//	int b = ~a;
//	//00000000000000000000000000000001 -- 1的补码
//	//11111111111111111111111111111110（补码）
//	//10000000000000000000000000000001
//	//10000000000000000000000000000010 > -2
//	//
//	printf("%d\n", b);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//10000000000000000000000000000000
//	//10000000000000000000000000000001 -1
//	int b = ~a;
//
//	printf("%d\n", b);
//
//	return 0;
//}
//
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//交换a和b的值
//	printf("a=%d b=%d\n", a, b);
//	//int c = a;
//	//a = b;
//	//b = c;
//
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//这种写法的缺陷是：a和b如果非常大，求和后的结果超过了整型的最大值
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//
//异或操作符的特点：
//a^a = 0
//0^a = a
//
//3^3^5 = 5
//3^5^3 = 5
//
//011
//101
//110
//011
//101


//int main()
//{
//	int a = -1;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

//什么时候需要考虑正负数呢？

//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//求一个整数存储在内存中的二进制中1的个数
//	int n = count_one_bit(num);
//	printf("%d\n", n);
//
//	return 0;
//}
//

//
//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//求一个整数存储在内存中的二进制中1的个数
//	int n = count_one_bit(num);
//	printf("%d\n", n);
//
//	return 0;
//}
//

//n = n&(n-1)
//效果：把n的二进制中最右边的1去掉了
// 
//n=15
//1111 - n
//1110 - n-1
//1110 - n
//1101 - n-1
//1100 - n
//1011 - n-1
//1000 - n
//0111 - n-1
//0000 - n

//
//判断一个数n是否是2的次方数
//

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	if ((n & (n - 1)) == 0)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}

//000001
//000010
//000100
//001000
//....

//int main()
//{
//	int n = 13;
//	n = n | (1 << 4);
//	printf("%d\n", n);
//	n = n & ~(1 << 4);
//	printf("%d\n", n);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//	
//	printf("%d\n", c);
//
//	return 0;
//}
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[5] = 6;//[] - 下标引用操作符
//	// arr 和 5是两个操作数
//	int c = Add(3, 5);//()函数调用操作符 - 函数名和参数就是操作数
//	test();//()函数调用操作符
//	printf("hehe\n");
//	return 0;
//}
//


//sizeof是操作符，不是函数
//
//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);
//
//	return 0;
//}
//












