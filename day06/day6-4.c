//4. 
//创建一个数组， 
//实现函数init（）初始化数组、 
//实现empty（）清空数组、 
//实现reverse（）函数完成数组元素的逆置。 
//要求：自己设计函数的参数，返回值。 
#include<stdio.h>
void empty(int *arr,int length)
{
	int i =0 ;
	for(i=0; i<length; i++)
	{
		arr[i]= 0;
	}	
}
void reverse(int *arr,int length)
{
	int left=0;
	int right=length-1;
	while(right>=left)
	{
		int temp = arr[left];
		arr[left]= arr[right];
		arr[right]=temp;
		left++;
		right--;
	}
}
void init(int *arr,int length,int num)
{
	int i = 0 ;
	for(i=0; i<length; i++)
	{	
		arr[i]= num;
	}
}
void display(int *arr,int length)
{
	int i =0;	
	for(i =0; i<length; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{	
	int arr [10]= {1,2,3,4,5,6,7,8,9,10};
	int length = sizeof(arr)/sizeof(arr[0]);
	reverse(arr,length);
	display(arr,length);
	empty(arr,length);
	display(arr,length);
	init(arr,length,1);
	display(arr,length);
	return 0 ;
}
