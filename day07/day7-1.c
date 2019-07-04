//1.递归和非递归分别实现求第n个斐波那契数。
#include<stdio.h>
//递归的方式
int fib1(int n)
{	
	if(n==1||n==2)
		return 1;
	else 
		return fib1(n-1)+fib1(n-2);
}
//非递归的方式
int fib2(int n)
{
	int num = 0,i=0,a=1,b=1;
	for(i = 2; i<n; i++)
	{
		num = a+b;
		a=b;
		b=num;
	}
	return num;
}
int main()
{	
	printf("请输入需要求的数字：\n");
	int num1 = 0;
	scanf("%d",&num1);
	int num3=fib2(num1);
        printf("非递归的方式求的数字为：%d\n",num3);
	int num2=fib1(num1);
	printf("递归的方式求的数字为：%d\n",num2);

	return 0;
	
}
