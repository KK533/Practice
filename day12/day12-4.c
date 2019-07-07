//4. 
//有一个字符数组的内容为:"student a am i", 
//请你将数组的内容改为"i am a student". 
//要求： 
//不能使用库函数。 
//只能开辟有限个空间（空间个数和字符串的长度无关）。 
//
//student a am i 
//i ma a tneduts 
//i am a student
#include<stdio.h>
int main()
{
	char src[100] = "project another from shared files contains";
	char *arr[100] = { 0 };
	char tar[100] = { 0 };
	int i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
//	printf("%c", src[i - 1]);
	int j = 0, m = 0;
	for (j = 0; j<=i; j++)
	{
		int flag = i - j - 1;
		if (src[flag] == ' ')
		{
			arr[m] = src + flag + 1;
			//printf("%c", *(src + flag + 1));
			m++;
		}
	}
	arr[m] = src;
	//printf("%c", *src);
	int n = 0, k = 0, flag = 0;
	while (k <= m)
	{
		tar[n] = *(arr[k] + flag);
		flag++;
		n++;
		if (*(arr[k] + flag) == ' ' || *(arr[k] + flag) == '\0')
		{
			tar[n] = ' ';
			n++;
			k++;
			flag = 0;
		}
	}
	tar[n] = '\0';
	printf("源字符串为：%s\n", src);
	printf("目标字符串为：%s\n", tar);

	return 0;
}
