//2 。不使用指针交换两个整形的值。
#include<stdio.h>
int main ()
{
	int a = 1,b = 2;
	printf("a = %d b = %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a = %d b = %d\n", a, b);	
}
