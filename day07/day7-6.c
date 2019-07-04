//6.递归和非递归分别实现求n的阶乘 
#include<stdio.h>
//递归方式
int factorial1(int n)
{
	if(n>0)
		return factorial1(n-1)*n;
	else
		return 1;
}
//非递归方式
int factorial2(int n)
{
	int num = 1;
	while(n>0)
	{
		num*=n;
		n--;
	}
	return num;
}
int main()
{	
	int num =0;
	printf("请输入需要求的数字：\n");
	scanf("%d",&num);
	int num1=factorial1(num);
	int num2=factorial2(num);
	printf("递归方式求得数字为：%d\n",num1);
	printf("非递归方式求得数字为：%d\n",num2);

	return 0 ;
}
