//2. 
////杨氏矩阵 
//有一个二维数组. 
//数组的每行从左到右是递增的，每列从上到下是递增的. 
//在这样的数组中查找一个数字是否存在。 
//时间复杂度小于O(N); 
//
//数组： 
//1 2 3 
//2 3 4 
//3 4 5 
//
//
//1 3 4 
//2 4 5 
//4 5 6 
//
//1 2 3 
//4 5 6 
//7 8 9
#include<stdio.h>
int select(int* arr,int num)
{
	int i=2;
        while(i<11)
        {
                if(arr[i]<num)
                {
                        i+=3;
                }
		else
		{
			int j = i;
			for(j=i; j>=i-2; j--)
			{
				if(arr[j]==num)
					return 1;
			}
		}
        }
	return -1;

}
int main()
{
	int arr[3][3]={1,2,3,2,3,4,3,4,5};
	printf("请输入需要查询的数：\n");
	int num =0 ;
	scanf("%d",&num);
	int flag=select(arr,num);
	if(flag==-1)
		printf("找不到你需要找的数\n");
	else
		printf("你需要找的数在数组中\n");
	return 0;
}
