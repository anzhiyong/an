#pragma once
#include<locale.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
#define WALL L'��'
#define BODY L'��'

#define POS_X 24
#define POS_Y 5


//���ߵķ���
enum DIRECTION
{
	UP=1,
	DOWN,
	LEFT,
	RIGHT
};

//�ߵ�״̬
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
}SnakeNode, * pSnakeNode;

//̰����
typedef struct Snake
{
	pSnakeNode pSnake;//�ߵĳ���
	pSnakeNode pFood;//ʳ��
	int Score;       //��ǰ�ۼƵķ���
	int FoodWeight;   //һ��ʳ��ķ�ֵ
	int SleepTime;    //�ߵ��ٶ�
	enum GAME_STATE state;//�ߵ�״̬
	enum DIRECTION dir;//�ߵķ���
}Snake,* pSnake;

void SetPos(int x, int y);//���ù��λ��
void GameStart(pSnake ps);//��Ϸ��ʼ��
void WelcomeToGame();//��ӡ��ӭ��Ϣ
void CreateMap();//������ͼ
void InitSnake(pSnake ps);//��ʼ����
void CreateFood(pSnake ps);//����ʳ��