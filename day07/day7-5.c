//5.递归和非递归分别实现strlen 
#include<stdio.h>
//非递归
int strlen1(char * string)
{
	int length = 0;
	while(*string!='\0')
	{
		string++;
		length++;
	}
	return length;
}
//递归
int strlen2(char *string)
{
	if(*string!='\0')
		return strlen2(string+1)+1;
	else
		return 0;
}
int main()
{
	char arr[50]={0};	
	printf("请输入需要求长度的字符串：\n");
	scanf("%s",arr);
	int length1 = strlen1(arr);
	int length2 = strlen2(arr);
	printf("非递归方式求得的长度为：%d\n",length1);
	printf("递归方式求得的长度为：%d\n",length2);

	return 0 ;
}
