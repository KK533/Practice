//2.获取一个数二进制序列中所有的偶数位和奇数位， 
//分别输出二进制序列。 
#include<stdio.h>
void display(int num)
{
	char arr[32] = {0};
	int i =0;
	for(i=0; i<32; i++)
	{
		arr[i]=num&1;
		num>>=1;
	}
	printf("这个数的二进制的奇数位为：\n");
	for(i =31;i>=0;i-=2)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("这个数的二进制的偶数位为：\n");
	for(i =30;i>=0;i-=2)
        {
                printf("%d",arr[i]);
        }
	printf("\n");
}
int main()
{
	printf("输入一个数，求这个数二进制的奇数位和偶数位：\n");
	int num=0;
	scanf("%d",&num);
	display(num);
	return 0;	
}
