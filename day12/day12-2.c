//2.不使用（a+b）/2这种方式，求两个数的平均值。 
#include<stdio.h>
int main()
{
	printf("请输入求平均的两个数：\n");
	int a =0,b=0;
	scanf("%d %d",&a,&b);
	int num = (a>>1)+(b>>1);
	printf("这两个数的平均值为：%d\n",num);
	return 0;
}
