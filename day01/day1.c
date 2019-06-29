#include<stdio.h>
#include<math.h>
//找100到200中的素数
void test1()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int j = 0;
		for (j = 2; j <= sqrt((double)i); j++)
		{
			if (i%j == 0)
				break;
		}
		if (j >= sqrt(i)){

			count++;
			printf("%d\t", i);
		}
	}
	printf("%d", count);

}
//乘法口诀表
void test2()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", j, i, i*j);
		}
		printf("\n");
	}
}
//判断1000年-2000年间的润年
void test3()
{
	int i = 0;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			count++;
			printf("%d  ", i);
		}
	}
	printf("%d\n", count);
}
int main()
{
	test1();
	test2();
	test3();
	return 0;
}
