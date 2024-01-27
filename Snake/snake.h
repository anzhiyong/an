#pragma once


#include<locale.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
#define WALL L'□'
enum DIRECTION
{
	UP=1,
	DOWN,
	LEFT,
	RIGHT
};
enum GAME_STATE
{
	OK = 1,
	ESC,
	KILL_BY_WALL,
	KILL_BY_SELF
};

//蛇身节点
typedef struct SnakeNode
{
	int x;
	int y;
	struct SnakeNode* next;
}SnakeNode, * pSnekeNode;

//贪吃蛇
typedef struct Snake
{
	pSnekeNode pSnake;//蛇的长度
	pSnekeNode pFood;//食物
	int Score;       //当前累计的分数
	int FoodWeight;   //一个食物的分值
	int SleepTime;    //蛇的速度
	enum GAME_STATE state;//蛇的状态
	enum DIRECTION dir;//蛇的方向
}Snake,* pSnake;

void GameStart(pSnake ps);//游戏初始化
void WelcomeToGame();//打印欢迎信息
void CreateMap();//创建地图
