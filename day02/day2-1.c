#include<stdio.h>
//1. 给定两个整形变量的值，将两个值的内容进行交换。
void test1(int *px,int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}   
int main()
{
	int a = 1,b = 2;
	printf("a =%d b = %d\n",a,b);
	test1(&a,&b);
	printf("a =%d b = %d\n",a,b);
	test1()
	return 0 ;
}
