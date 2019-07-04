//4.编写一个程序，可以一直接收键盘字符， 
//如果是小写字符就输出对应的大写字符， 
//如果接收的是大写字符，就输出对应的小写字符， 
//如果是数字不输出。
#include<stdio.h>
int main()
{	
	char a = 0;
	while(1)
	{
		printf("输入一个字符：\n");
		a = getchar();
		if(a >= 'A' && a < 'Z')
			printf("该字符的小写为：%c\n",a+32);
		if(a >= 'a' && a < 'z')
                        printf("该字符的大写为：%c\n",a-32);
	}
	return 0 ;
}
