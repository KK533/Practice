//5.求两个数的最大公约数
#include<stdio.h>
int main()
{
	int a = 0,b = 0,c = 1;
	scanf("%d %d",&a,&b);
	printf("%d %d",a,b);
	while(c!=0)
	{
  		c = a%b;
		a = b;
		b = c;
	}
	printf("这两个数的最大公约数为：%d\n",a);
	return 0 ;
}
