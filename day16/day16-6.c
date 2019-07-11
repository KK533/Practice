//6.实现memcpy 
#include<stdio.h>
#include<string.h>
void my_memcpy(const char* s1,char* s2,int length)
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
	const char s1[100] = "hello bit!";
	char s2[100] = {0};

	my_memcpy(s1,s2,strlen(s1)+1);
	printf("复制后的s2为：%s\n",s2);
		
	return 0;
}
