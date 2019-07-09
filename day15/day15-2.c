//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水， 
//给20元，可以多少汽水。 
//编程实现。 
#include<stdio.h>
int main()
{
	int n = 20;//没喝之前的汽水瓶
	int m = 0;//每次喝完的瓶子
	int count = 20;//最终喝的汽水瓶数
	int k = 0;//空瓶可以换的汽水
	while(n>1)
	{
		m = n;
		k = m/2;
		n = k+m%2;
		count=count+k;
	}
	printf("可以喝%d瓶汽水\n",count);
	return 0;
}
