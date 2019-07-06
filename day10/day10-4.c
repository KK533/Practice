//4.编程实现： 
//两个int（32位）整数m和n的二进制表达中， 
//有多少个位(bit)不同？ 
//输入例子: 
//1999 2299 
//输出例子:7	
#include<stdio.h>
int difference_bit_number(int num1,int num2)
{
	int count = 0;
	int num = num1^num2;
	int i =0;
	for(i=0; i<32; i++)
	{
		if(num&1==1)
			count++;
		num>>=1;
	}
	return count;
}
int main()
{
	printf("请输入两个数：\n");
	int num1=0,num2=0;
	scanf("%d %d",&num1,&num2);
	printf("这两个数的二进制中有%d个位不同\n",difference_bit_number(num1,num2));
	return 0;	
}

