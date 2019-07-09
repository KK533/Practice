//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。 
//例如：给定s1 =AABCD和s2 = BCDAA，返回1 
//给定s1=abcd和s2=ACBD，返回0. 
//
//AABCD左旋一个字符得到ABCDA 
//AABCD左旋两个字符得到BCDAA 
//
//AABCD右旋一个字符得到DAABC
#include<stdio.h>
//左旋函数
char* rotate(char* arr,int n)
{
        char* arr1=arr;
        char arr2[100];
        int i =0;
        while(arr[i]!='\0')
        {
                i++;
        }
        int j=0,k=0;
        for(j=0; j<n; j++)
        {
                arr2[j]=arr[j];
        }
        for(j=n; j<i; j++)
        {
                arr[k]=arr1[j];
                k++;
        }
        for(j=0; j<n; j++)
        {
                arr[k]=arr2[j];
                k++;
        }
        return arr;

}
//判断函数
int is_rotate(char* s1,char* s2)
{
	int n=0,m=0;
	while(s1[m]!='\0')
	{
		m++;
	}
	while(n<m)
	{
		int i =0,flag=1;
		while(s1[i]!='\0')
		{
			if(s1[i]!=s2[i])
			{
				flag=0;
				break;
			}
			i++;
		}
		if(flag==1)
		{
			return 1;
		}
		else
		{
			s2 = rotate(s2,n);	
		}
		n++;
	}	
	return 0;
}
int main()
{
        char s1[100] = {0};
	char s2[100] = {0};
        printf("请输入需要判断的字符串1：\n");
        scanf("%s",s1);
        printf("请输入需要判断的字符串2：\n");
        scanf("%s",s2);
        int flag = is_rotate(s1,s2);
	if(flag == 1)
        	printf("s2是s1左旋后的字符串\n");
	else
		printf("s2不是s1左旋后的字符串\n");

        return 0;
}

