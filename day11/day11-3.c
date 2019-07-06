//3.在屏幕上打印杨辉三角。 
//1 
//1 1 
//1 2 1 
//1 3 3 1
#include<stdio.h>
int main()
{
	printf("请输入需要打印的行数：\n");
	int line =0 ;
	scanf("%d",&line);
	int arr1[100]={0};
	int arr2[100]={0};
	int i =0 ;
	for(i=0; i<line; i++)
	{
		int j =0;
		for(j=0; j<line-i-1; j++)
		{
			printf("  ");	
		}
		if(i==0)
		{
			arr2[0]=1;	
			printf("1  ");	
		}
		else
		{
			for(j=0; j<=i; j++)
			{
				if(j==0||j==i)
				{	
					printf("%-3d ",1);
					arr2[j]=1;
				}
				else	
				{
					printf("%-3d ",arr1[j]+arr1[j-1]);
					arr2[j]=arr1[j]+arr1[j-1];
				}
				
			}
		}
		for(j=0; j<100; j++)
		{
			arr1[j]=arr2[j];
		}
		printf("\n");	
	}
	return 0;
}
