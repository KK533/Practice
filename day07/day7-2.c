//2.编写一个函数实现n^k，使用递归实现
#include<stdio.h>
int test(int n,int k)
{
	if(k>0)
	   	return test(n,k-1)*n;
	else
		return 1;

}
int main()
{	
	int n =0,k=0;
	printf("请输入底数与指数：\n");
	scanf("%d %d",&n,&k);
	int num = test(n,k);
	printf("求得的数为：%d\n",num);
	return 0;	
}
