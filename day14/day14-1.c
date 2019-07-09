//1.实现一个函数，可以左旋字符串中的k个字符。 
//ABCD左旋一个字符得到BCDA 
//ABCD左旋两个字符得到CDAB
#include<stdio.h>
char* rotate(char* arr,int n)
{
	char* arr1=arr;
	char arr2[100];
	int i =0;
	while(arr[i]!='\0')
	{
		i++;
	}
	int j=0,k=0;
	for(j=0; j<n; j++)
	{
		arr2[j]=arr[j];	
	}
	for(j=n; j<i; j++)
	{
		arr[k]=arr1[j];
		k++;
	}
	for(j=0; j<n; j++)
	{	
		arr[k]=arr2[j];
                k++;	
	}
	return arr;

}
int main()
{
	char src[100] = {0};
	int num = 0;
	printf("请输入需要左旋的字符串：\n");
	scanf("%s",src);
	printf("请输入需要左旋字符的个数：\n");
	scanf("%d",&num);
	char* tar=rotate(src,num);
	printf("左旋后的字符串为：%s\n",tar);
	return 0;
}
