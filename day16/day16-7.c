//7.实现memmove
#include<stdio.h>
#include<string.h>
void my_memmove(const char* s1, char *s2, int length)
{
	int i = 0;
	while(i!=length)
	{
		*(s2+i)=*(s1+i);
                i++;
	}
}
int main()
{
	const char s1[]= "hello bit!";
	const char s2[]= "hi kaikai!";

	printf("调函数之前：S1:%s  S2:%s\n",s1,s2);
	my_memmove(s1,s2,strlen(s1)+1);
	printf("调函数之后：S1:%s  S2:%s\n",s1,s2);

	return 0;
}
