//1.一个数组中只有两个数字是出现一次， 
//其他所有数字都出现了两次。 
//找出这两个只出现一次的数字，编程实现。 
#include<stdio.h>
int main()
{	
	printf("请输入需要测试的数组：\n");
	int arr[10]={0};
	int i =0;
	for(i=0; i<10; i++)
	{
		int temp = 0;
		scanf("%d",&temp);
		arr[i]=temp;
	}
	for(i=0; i<10; i++)
	{
		int j =0;
		for(j=i+1; j<10; j++)
		{
			if(arr[i]==arr[j])
			{
				arr[i]=0;
				arr[j]=0;
				break;
			}
		}
	}
	printf("重复的数字为：\n");
	for(i=0; i<10; i++)
	{
		if(arr[i]!=0)
			printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
