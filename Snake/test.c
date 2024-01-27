#define _CRT_SECURE_NO_WARNINGS 1
#include"snake.h"

void test()
{
	Snake snake = { 0 };
	GameStart(&snake);
	//GameRun();
	//GameEnd();
}
int main()
{
	//适配本地中文环境
	setlocale(LC_ALL, "");

	//贪吃蛇游戏的设置
	test();
	return 0;
}