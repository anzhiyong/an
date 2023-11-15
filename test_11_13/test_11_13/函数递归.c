#include<stdio.h>
//int Fibonacci(int n)递归实现斐波那契 
//{
//	if(n==1||n==2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fibonacci(n-2)+Fibonacci(n-1);
//	 } 
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	Fibonacci(n);
//	int i,ret; 
//	for(i=1;i<=n;i++)
//	{
//		ret = Fibonacci(i);
//	}
//	printf("%d ",ret);
//}


//int main() //非递归实现斐波那契 
//{
//	int f1=1,f2=1,f3=1;
//	int n;
//	scanf("%d",&n);
//	int i;
//	for(i=2;i<n;i++)
//	{
//		f3=f1+f2;
//		f1=f2;
//		f2=f3;
//	}
//	printf("%d ",f3);
//	
//}


////使用递归求k的n次方 
//int NK(int n,int k)
//{
//	if(n==0)
//		return 0;
//	if(k==1)
//		return n;
//	if(k==0)
//		return 1;
//	return n*NK(n,k-1);
//}
//int main()
//{
//	int n,k;
//	printf("请输入n的值和次方k的值");
//	scanf("%d%d",&n,&k);
//	printf("结果为：%d",NK(n,k)); 
//}



//int DigitSum(int n)//计算一个数的每位之和（递归实现
//{
//	int i=0;
//	i=n%10;
//	if(n/10==0)
//		return i;
//	return DigitSum(n/10)+i;
//}
//int main()
//{
//	int sum;
//	scanf("%d",&sum);
//	printf("%d",DigitSum(sum));
//}


////求阶乘 (for)
//int main()
//{
//	int n;
//	int sum=1;
//	scanf("%d",&n);
//	int i;
//	for(i=1;i<=n;i++)
//	{
//		sum=sum*i;
//	}
//	printf("%d",sum);
//}
////求阶乘（递归） 
//int fun(int n)
//{
//	if(n==0||n==1)
//		return 1;
//	return n*fun(n-1);
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	printf("%d ",fun(n));
//}


////递归方式实现打印一个整数的每一位
//void print(int n)
//{
//	if(n>9)
//		print(n/10);
//	printf("%d ",n%10);
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	print(n);
//}
