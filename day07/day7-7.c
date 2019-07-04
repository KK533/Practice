//7.递归方式实现打印一个整数的每一位 
#include<stdio.h>
void display(int n)
{
	if(n>0)
	{
		display(n/10);
		printf("%d ",n%10);
	}
}
int main()
{
	int num = 0;
	printf("请输入需要操作的数字：\n");
	scanf("%d",&num);
	display(num);
	return 0;
}
