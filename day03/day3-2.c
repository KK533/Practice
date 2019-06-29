//2.计算1/1-1/2+1/2-1/4+1/5.。。。。。。+1/99-1/100的值
#include<stdio.h>
int main()
{
	int i = 0,flag = 1;
	double num = 0 ,sum = 0;
	for(i = 1; i<=100; i++)
	{
		num = flag*(1.0/i);
		sum+=num;
		flag = -flag;
	}
	printf("1/1-1/2+1/2-1/4+1/5。。。。。。+1/99-1/100的值为:%lf\n",sum);
	return 0 ;
}
