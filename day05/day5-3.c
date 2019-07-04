//3.编写代码模拟三次密码输入的场景。 
//最多能输入三次密码，密码正确，提示“登录成功”,密码错误， 
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
#include<stdio.h>
int main()
{	
	char input_password [20]= {0};
	char password [20]= "kaikai";
	int length = sizeof(password)/sizeof(password[0]);
	printf("请输入密码:\n");
	int i =0 ;
	for(i = 0; i<3; i++)
	{
		int flag =0; 
		scanf("%s",&input_password);
		int j =0;
		for(j=0; j<length; j++)
		{
			if(input_password[j]!=password[j])
			{
				printf("密码输入错误,请重新输入:\n");
				flag=1;
				break;	
			}
		}
		if(flag==0)
		{
			printf("登陆成功\n");
			break;
		}
	}
	if(i==3)
		printf("退出程序\n");
	return 0;
}
