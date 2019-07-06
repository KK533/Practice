//1. 
//写一个函数返回参数二进制中 1 的个数 
//比如： 15 0000 1111 4 个 1 
//程序原型： 
//int count_one_bits(unsigned int value) 
//{ 
// 返回 1的位数 
// } 
#include<stdio.h>
int count_one_bits(unsigned int value)
{
	int count = 0;
	while(value|0!=0)
	{
		if(value&1==1)
		{
			count++;
		}
		value>>=1;
	}
	return count;
}
int main()
{
	printf("请输入需要求的数字:\n");
	int num=0;
	scanf("%d",&num);
	printf("这个数字的二进制中有%d个1\n",count_one_bits(num));
	return 0;
}
