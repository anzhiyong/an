#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu(void)
{
	printf("**************\n");
	printf("**1.star******\n");
	printf("**0.exit******\n");
	printf("**************\n");
}
void game()
{
	char mine[ROWS][COLS];//存放布置好的累
	char show[ROWS][COLS];//
	//初始化棋盘
	IntiBoard(mine, ROWS, COLS, '0');
	IntiBoard(show, ROWS, COLS, '*');
	//打印棋盘
	DisplayBoard(show, ROW, COL);
}
int main()
{
	int input = 0;
	
	do
	{
		menu();
		printf("请选择->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷");
			break;
		case 0:
			printf("游戏结束");
			break;
		default:printf("输入错误");   
		}
	} while (input);
	


}