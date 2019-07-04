//2.折半查询
#include<stdio.h>
int binary_search(int*arr,int length,int num)
{	
	int mid = 0;
	int left = 0;
        int right = length-1;
        while(right>=left)
        {
                mid = left+(right-left)/2;
                if(num>arr[mid])
                        left = mid+1;
                else if(num<arr[mid])
                        right = mid-1;
                else
			return mid;
        }
	return -1;

}
int main()
{	
	int num = 0;
	printf("请输入需要查询的数字：\n");
	scanf("%d",&num);
	int arr [10] = {1,2,3,4,5,6,7,8,9,10};
	int length = sizeof(arr)/sizeof(arr[0]);
	int index = binary_search(arr,length,num);
	if(index == -1)
		printf("找不到该数字的下标\n");
	else
		printf("该数字的下标为：%d\n",index);
	return 0;
}
