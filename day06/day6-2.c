//2.使用函数实现两个数的交换。 
#include<stdio.h>
//实现两个数的交换
void exchenge(int *px,int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}
int main()
{	
	int a = 1,b = 2;
	printf("a = %d b = %d\n",a,b);
	exchenge(&a,&b);
	printf("a = %d b = %d\n",a,b);
	return 0;
}
