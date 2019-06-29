//3 求十个整数中的最大值
#include<stdio.h>
int main()
{
	int a [10] = {2,3,1,4,5,6,8,7,9,10};
	int i = 0 ;
	int max = 0;
	for(i = 0; i<10; i++)
	{
		 if(a[i]>max)
			max = a[i];
	}	
	printf("max = %d\n",max);
	return 0 ;
}
