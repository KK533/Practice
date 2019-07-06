//3. 输出一个整数的每一位。 
#include<stdio.h>
int test(int num )
{
	if(num>0)
	{
		test(num/10);
		printf("%d ",num%10);
	}	
}
int main()
{
	printf("请输入一个数：\n");
	int num = 0;
	scanf("%d",&num);
	test(num);
	printf("\n");
	return 0;

}

