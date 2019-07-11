//2.实现strcat
#include<stdio.h>
char* my_strcat(char* s1,char* s2)
{
	int i =0,j=0;
	while(s1[i]!='\0')
	{
		i++;
	}
	while(s2[j]!='\0')
	{
		s1[i]=s2[j];
		i++;
		j++;
	}
	s1[i]='\0';
	return s1;

} 
int main()
{
	char s1[100]={0};
        char s2[100]={0};
        printf("请输入源字符串S1：\n");
        scanf("%s",s1);
	printf("请输入源字符串S2：\n");
        scanf("%s",s2);
        char* s = my_strcat(s1,s2);
        printf("连接后的字符串为：%s\n",s);
	return 0;
}
