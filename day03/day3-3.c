//3.在1-100中的9出现了多少次
#include<stdio.h>
int main()
{
	int i = 0,count=0;
	for(i=0; i<100; i++)
	{
		if(i%10==9)
		count++;
		if(i/10==9)
		count++;
	}
	printf("在1-100中的9出现了:%d次\n",count);
	return 0 ;
}
