#include<stdio.h>
//int Fibonacci(int n)�ݹ�ʵ��쳲����� 
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


//int main() //�ǵݹ�ʵ��쳲����� 
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


////ʹ�õݹ���k��n�η� 
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
//	printf("������n��ֵ�ʹη�k��ֵ");
//	scanf("%d%d",&n,&k);
//	printf("���Ϊ��%d",NK(n,k)); 
//}



//int DigitSum(int n)//����һ������ÿλ֮�ͣ��ݹ�ʵ��
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


////��׳� (for)
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
////��׳ˣ��ݹ飩 
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


////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
