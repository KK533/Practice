//1.完成课堂中的三子棋程序。 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define X 3
#define Y 3
//输赢判断
int win(char arr[X][Y])
{
	int i = 0;
	for ( i = 0; i < X; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] == 'x' || 
			arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] == 'x' || 
			arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] == 'x' || 
			arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] == 'x')
		{
			return 1;
		}
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] == 'o' ||
			arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] == 'o' ||
			arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] == 'o' ||
			arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] == 'o')
		{
			return 0;
		}

	}
}
//初始化
void init(char arr[X][Y], int n, int m)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < m; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
//赋值函数
int step(char arr[X][Y], int n, int m)
{
	if (arr[n-1][m-1] == ' ')
		return 1;
	else
		return 0;

}
//电脑玩家
void computer(char arr[X][Y])
{
	while (1)
	{
		int a = rand() % 3+1;
		int b = rand() % 3+1;
		if (step(arr,a,b))
		{
			arr[a-1][b-1]='o';
			break;
		}
	}
}
//判断是否为空函数
int is_full(char arr[X][Y], int n, int m)
{
	int i = 0;
	for ( i = 0; i < n; i++)
	{
		int j = 0;
		for ( j = 0; j < m; j++)
		{
			if (arr[i][j] == ' ')
				return 1;
		}
	}
	return 0;
}
//显示函数
void display(char arr[X][Y], int n, int m)
{
	int i = 0;
	for (i = 0; i<n; i++)
	{
		int j = 0;
		for (j = 0; j<m; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j != m - 1)
				printf("|");

		}
		printf("\n");
		if (i != n - 1)
		{
			for (j = 0; j<m; j++)
			{
				printf("---");
				if (j != m - 1)
					printf("|");

			}

		}
		printf("\n");
	}
}
//游戏函数
void game()
{
	printf("开始游戏\n");
	char arr[X][Y] = { 0 };
	init(arr, X, Y);
	display(arr, X, Y);
	while (is_full(arr, X, Y))
	{
		printf("玩家走，请输入坐标:\n");
		int a = 0, b = 0;
		scanf("%d %d", &a, &b);
		if (step(arr, a, b))
			arr[a - 1][b - 1] = 'x';
		else
			printf("坐标错误\n");
		display(arr, X, Y);
		printf("电脑走:\n");
		computer(arr);
		display(arr, X, Y);
		int flag = win(arr);
		if (flag==1)
		{	
			printf("玩家赢，游戏结束\n");
			break;
		}
		if (flag == 0)
		{
			printf("电脑赢，游戏结束\n");
			break;
		}

	}

}
void menu()
{
	printf("**********************************\n");
	printf("*********  1.   play     *********\n");
	printf("*********  2.   exit     *********\n");
	printf("**********************************\n");
}
int main()
{
	srand((unsigned)time(NULL));
	menu();
	printf("请输入将要进行操作的序号：\n");
	while (1)
	{
		int index = 0;
		scanf("%d", &index);
		if (index == 2)
		{
			printf("游戏结束\n");
			break;
		}
		else if (index == 1)
		{
			game();
			break;
		}
		else
			printf("输入错误\n");
	}
	return 0;
}
