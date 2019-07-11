//3.实现strstr 
#include<stdio.h>
char* my_strstr(char* s1,char* s2)
{
	int i = 0,j = 0,n = 0,nflag = 1;
	while(*(s1+i)!='\0')
	{
		if(*(s1+i)==*s2)
		{	
			n = i;
			while(*(s2+j)!='\0')
			{
				if(*(s1+i)!=*(s2+j))
				{
					break;
				}	
				i++;
				j++;
			}
		}
		if(*(s2+j)=='\0')
			return s1+n;
		i++;
	}
	return NULL;
}
int main()
{
	char* s1 ="hello bit!";
	char* s2 ="bit";
	char* s = my_strstr(s1,s2);
	if(s!=NULL)
		printf("s2出现在s1中的位置是：%s\n",s);
	else
		printf("s2没有出现在s1中\n");
	return 0;
}
