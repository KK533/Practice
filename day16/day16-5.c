//5.实现strcmp
#include<stdio.h>
#define bool char
#define true 1
#define false 0 
bool my_strcmp(const char* s1,const char* s2)
{
	int i = 0;
	while(*(s1+i)!='\0')
	{
		if(*(s1+i)!=*(s2+i))
			return false;
		i++;
	}
	if(*(s2+i)!='\0')
		return false;
	return true;
}
int main()
{
	const char* s1 = "hello bit!";
	const char* s2 = "hello bit!";
	bool flag = my_strcmp(s1,s2);
	if(flag)
		printf("字符串s1和字符串s1相同\n");
	else
		printf("字符串s1和字符串s1不同\n");
	return 0;
}
