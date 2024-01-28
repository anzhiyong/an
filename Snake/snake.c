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
	for (int i = 1; i <= 25; i ++)
	{
		SetPos(0, i);
		wprintf(L"%c", WALL);
	}
	//右
	for (int i = 1; i <= 25; i++)
	{
		SetPos(56, i);
		wprintf(L"%c", WALL);
	}
}

void InitSnake(pSnake ps)
{
	//创建五个蛇神节点
	pSnakeNode cur = NULL;
	for (int i = 0; i < 5; i++)
	{
		cur = (pSnakeNode)malloc(sizeof(SnakeNode));
		if (cur == NULL)
		{
			perror("InitSnake:malloc");
			return;
		}
		cur->x = POS_X + 2 * i;
		cur->y = POS_Y;
		cur->next = NULL;

		//头插法
		if (ps->pSnake == NULL)
		{
			ps->pSnake = cur;
		}
		else
		{
			cur->next = ps->pSnake;
			ps->pSnake = cur;
		}
	}
	//打印蛇的身体
	cur = ps->pSnake;
	while (cur)
	{
		SetPos(cur->x, cur->y);
		wprintf(L"%lc", BODY);
		cur = cur->next;
	}
	//贪吃蛇其他信息初始化
	ps->dir = RIGHT;
	ps->FoodWeight = 10;
	ps->pFood = NULL;
	ps->Score = 0;
	ps->SleepTime = 200;
	ps->state = OK;
}

void CreateFood(pSnake ps)
{
	int x = 0;
	int y = 0;

	do
	{
		x = rand() % 53 + 2;
		y = rand() % 25 + 1;
	} while (x % 2 != 2);

}

void GameStart(pSnake ps)
{
	//设置控制台
	system("mode con cols=100 lines=30");
	system("title 贪吃蛇@安");
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
	InitSnake(ps);
	//创建食物
	CreateFood(ps);

	getchar();
}