//1.实现strcpy
#include<stdio.h>
void strcopy(char* tar,char* src)
{
	int i =0;
	while(src[i]!='\0')
	{
		tar[i]=src[i];
		i++;
	}
}
int main()
{
	char s1[100]={0};
	char s2[100]={0};
	printf("请输入源字符串：\n");
	scanf("%s",s1);
	strcopy(s2,s1);
	printf("复制后的字符串为：%s\n",s2);
	return 0;
}
