#define _CRT_SECURE_NO_WARNINGS 1

#include"snake.h"

//设置光标位置
void SetPos(int x,int y)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { x,y };
	SetConsoleCursorPosition(handle, pos);
}
void WelcomeToGame()
{
	SetPos(40, 15);
	printf("欢迎来到贪吃蛇");
	SetPos(40, 20);
	system("pause");
	system("cls");

	//功能介绍
	SetPos(15, 10);
	printf("用 ↑ . ↓ . ← . → 来控制蛇的移动，F3是加速，F4是减速");
	SetPos(15, 11);
	printf("加速能得到更高的分数");
	SetPos(38, 20);
	system("pause");
	system("cls");
}

void CreateMap()
{
	//上
	SetPos(0, 0);
	for (int i = 0; i <= 56; i += 2)
	{
		wprintf(L"%c", WALL);
	}
	//下
	SetPos(0, 26);
	for (int i = 0; i <= 56; i += 2)
	{
		wprintf(L"%c", WALL);
	}
	//左
	for (int i = 0; i <= 26; i ++)
	{
		SetPos(0, i);
		wprintf(L"%c", WALL);
	}
	//右
	for (int i = 0; i <= 26; i++)
	{
		SetPos(56, i);
		wprintf(L"%c", WALL);
	}
}


void GameStart(pSnake ps)
{
	//设置控制台
	system("mode con cols=100 lines=30");
	system("title 贪吃蛇");
	//隐藏光标
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorinfo;
	GetConsoleCursorInfo(handle, &cursorinfo);
	cursorinfo.bVisible = false;
	SetConsoleCursorInfo(handle, &cursorinfo);
	//打印欢迎信息
	WelcomeToGame();
	//绘制地图
	CreateMap();
	//初始化蛇

	//创建食物


	getchar();
}