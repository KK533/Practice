//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 
//输入9，输出9*9口诀表，输入12，输出12*12的乘法口诀表。
#include<stdio.h>
int main()
{
	printf("请输入乘法口诀表的大小：\n");
	int length = 0 ;
	scanf("%d",&length);
	
	int i = 0;
	for (i = 1; i <= length; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%-2d=%-3d ", j, i, i*j);
		}
		printf("\n");
	}
	return 0;
}
