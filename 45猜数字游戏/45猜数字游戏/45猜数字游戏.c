#define _CRT_SECURE_NO_WARNINGS
////////////////////猜数字游戏
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//创建菜单
void menu()
{
	printf("********************************************\n");
	printf("********  1. 进入游戏   0. 退出游戏  *******\n");
	printf("********************************************\n");
}
//进入猜数字游戏
void game()
{
	int ret = rand()%100+1;   //用来生产1-100之间的随机数
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}

	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择(1/0):>");
		scanf("%d", &input);
		switch (input)
		{
		case 0: 
			printf("退出游戏");
			break;
		case 1:
			game();
			break; 
		default:
			printf("选择错误，请重新输入！\n");
		}
	} while (input);
	return 0;
}