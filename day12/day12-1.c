//这个函数的返回值是value的二进制位模式从左到右翻转后的值。 
//
//如： 
//在32位机器上25这个值包含下列各位： 
//00000000000000000000000000011001 
//翻转后：（2550136832） 
//10011000000000000000000000000000 
//程序结果返回： 
//2550136832
#include<stdio.h>
unsigned int zhishu(int n, int m)
{
	if (m == 0) return 1;
	unsigned int num = 1;
	int i = 0;
	for (i = 0; i<m; i++)
	{
		num *= n;
	}
	return num;

}
unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	unsigned int reverse_value = 0;
	for (i = 0; i<32; i++)
	{
		if (value & 1 == 1)
		{
			reverse_value = reverse_value ^ zhishu(2, 31 - i);
			value >>= 1;
		}
		else
		{
			value >>= 1;
		}
	}
	return reverse_value;
}
int main()
{
	printf("请输入一个数（0-65535）：\n");
	unsigned int num = 0;
	scanf("%u", &num);
	printf("翻转以后的数字为：%u\n", reverse_bit(num));
	return 0;
}
