#pragma once


#include<locale.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
#define WALL L'��'
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

//����ڵ�
typedef struct SnakeNode
{
	int x;
	int y;
	struct SnakeNode* next;
}SnakeNode, * pSnekeNode;

//̰����
typedef struct Snake
{
	pSnekeNode pSnake;//�ߵĳ���
	pSnekeNode pFood;//ʳ��
	int Score;       //��ǰ�ۼƵķ���
	int FoodWeight;   //һ��ʳ��ķ�ֵ
	int SleepTime;    //�ߵ��ٶ�
	enum GAME_STATE state;//�ߵ�״̬
	enum DIRECTION dir;//�ߵķ���
}Snake,* pSnake;

void GameStart(pSnake ps);//��Ϸ��ʼ��
void WelcomeToGame();//��ӡ��ӭ��Ϣ
void CreateMap();//������ͼ
