//3.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
#include<stdio.h>
int main()
{	
	int num = 0, i = 0, temp = 0, sum = 0, ten = 1;
	printf("求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字\n");
	printf("请输入需要计算的数字：");
	scanf("%d", &num);
	for (i = 0; i<5; i++)
	{
		temp += num*ten;
		sum += temp;
		ten = ten * 10;
	}
	printf("结果为：%d\n", sum);
	return 0;
}
