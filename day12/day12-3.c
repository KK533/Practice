//3.编程实现： 
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。 
//请找出这个数字。（使用位运算） 
#include<stdio.h>
int main()
{
	int arr[9] ={1,1,2,2,3,3,4,4,5};
	int i =0;
	int num = 0;
	for(i=0; i<9; i++)
	{
		num^=arr[i];
	}
	printf("出现一次的数为：%d\n",num);
	return 0;
}
