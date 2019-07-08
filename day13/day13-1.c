//1.调整数组使奇数全部都位于偶数前面。 
//
//题目： 
//输入一个整数数组，实现一个函数， 
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分， 
//所有偶数位于数组的后半部分。
#include<stdio.h>
//调整数组的函数
int * adjustment(int *arr,int length)
{
	int a = length;
	int arr1[a];
	int j=0;	
	for(j=0; j<length; j++)
	{
		arr1[j]=arr[j];
	}
	int i=0,n=0,m=length-1;
	while(n<=m)
	{
		if(arr1[i]%2==0)//偶数
		{
			arr[m]=arr1[i];
			m--;
		}
		else	      //奇数
		{
			arr[n]=arr1[i];
			n++;
		}
		i++;
	}
	return arr;
}
int main()
{
	printf("请输入一个数组(空格间隔)：\n");
	int arr[10]={0};
	int i =0;
	for(i=0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	int length=sizeof(arr)/sizeof(arr[0]);
	int *arr1=adjustment(arr,length);
	printf("改变后的数组为：\n");
	for(i=0; i<10; i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
	return 0;
}
