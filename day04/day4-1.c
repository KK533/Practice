//1.用*输出组成一个菱形
#include<stdio.h>
int main()
{
	int line = 0,i=0,j=0;
	printf("请输入菱形的高度(奇数)：\n");
	scanf("%d",&line);
	for(i=0; i<line/2+1; i++)
	{
		int m=0,n=0;
		for(m=0; m<line/2-i; m++)
		{
			printf(" ");
		}
		for(n=0; n<2*i+1; n++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	for(j=line/2; j>0; j--)       
        {
                int m=0,n=0;
                for(m=0; m<line/2-j+1; m++)
                {
                        printf(" ");
                }
                for(n=0; n<2*j-1; n++)
                {
                        printf("*");
                }
		printf("\n");

        }

	return 0;
}
