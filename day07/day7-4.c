//4. 编写一个函数 reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。 
//要求：不能使用C函数库中的字符串操作函数。
#include<stdio.h>
int length(char * string)
{
	if(*string!='\0')
		return length(string+1)+1;
	else
		return 0;
}
void reverse_string(char * string)
{
	int size = length(string);
	if(size>=1)
	{
		char temp = string[0];
		string[0]=string[size-1];
		string[size-1]='\0';
		reverse_string(string+1);
		string[size-1] = temp;
			
	}
	
}
int main()
{
	printf("请输入需要反转的字符串：\n");
	char arr[20]={0};
	scanf("%s",&arr);
	int length1= length(arr);
	//printf("%d\n",length1);
	reverse_string(arr);
	printf("反转以后的字符串为：\n%s\n",arr);
	return 0;
}
