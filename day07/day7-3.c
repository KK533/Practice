//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
//例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
#include<stdio.h>
int DigitSum(int n)
{
	if(n>0)
		return DigitSum(n/10)+n%10;
	else
		return 0;
}
int main()
{
	printf("请输入需要求的数字：\n");
	int num1= 0;
	scanf("%d",&num1);
	int num2=DigitSum(num1);
	printf("求得的数字为：%d\n",num2);
	return 0 ;
}
