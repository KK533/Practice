//5.实现一个函数，判断一个数是不是素数。
#include<stdio.h>
#include<math.h>
int is_prime_number(int num)
{
	int j =0;
	for(j=2; j<=sqrt((double)num);j++ )
	{
		if(num%j==0)
			return 0;
	}
	return 1;
}
int main()
{	
	int num = 0;
	printf("请输入一个数：\n");
	scanf("%d",&num);
	int flag=is_prime_number(num);
	if(flag==1)
		printf("是素数\n");
	else
		printf("不是素数\n");
	return 0;
}
