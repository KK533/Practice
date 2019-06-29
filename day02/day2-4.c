//4.将三个数从大到小输出
#include<stdio.h>
//两个数交换
void swp(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}
int main()
{	
	int a = 1,b = 2,c = 3;
	if(a<b) swp(&a,&b);
	if(a<c) swp(&a,&c);
	if(b<c) swp(&b,&c);
	printf("从大到小为：%d>%d>%d\n",a,b,c);
}
