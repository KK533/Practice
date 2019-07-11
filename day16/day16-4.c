//4.实现strchr 
#include<stdio.h>
char* my_strchr(const char* s1,const char s2)
{
	int i = 0;
	while(*(s1+i)!='\0')
	{
		if(*(s1+i)==s2)
			return s1+i;
		i++;
	}
	return NULL;
}
int main()
{
	const char* s1 = "hello bit!";
	const char s2 = 'b';
	char* s;

	s = my_strchr(s1,s2);

	printf("字符%c出现在字符串%s的第一个位置是：%s\n",s2,s1,s);
	
	return 0;
}
