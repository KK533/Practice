//1.完成猜数字游戏
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{	
	srand((unsigned)time(NULL));
	int i = rand()%100+1;
	printf("请输入你猜的数字：\n");
	int num = 0;
	while(1)
	{
		scanf("%d",&num);
		if(num>i)
		{
			printf("猜大了\n");
		}
		else if(num<i)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
			
	}	
	return 0;
}
