//3.实现一个函数判断year是不是润年。 
#include<stdio.h>
int test(int year)
{
	return (( year% 4 == 0 && year % 100 != 0) || year % 400 == 0);
		
}
int main()
{	
	printf("请输入一个年份：\n");
	int year = 0;
	scanf("%d",&year);
	int flag = test(year);
  	if(flag==0)
		printf("不是润年\n");
	else
		printf("是润年\n");
	return 0;
}
