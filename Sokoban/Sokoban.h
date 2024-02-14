#pragma once


#include <stdio.h>

IMAGE img[8];
void blank(int x1, int y1);	                //画空地
void man(int x1, int y1);                	//画皮卡丘
void box(int x1, int y1);	                //画箱子
void dest(int x1, int y1);					//画目的地
void man1(int x1, int y1);	                //画在目的地上的皮卡丘
void box1(int x1, int y1);					//画在目的地上的箱子
void wall(int x1, int y1);	                //画围墙
void man1(int x1, int y1);					//画在胜利的皮卡丘
void print(int a[15][15]);	                //把数组里的全画出来
void move(int a[15][15], int x1, int y1);	//移动
void find(int a[15][15]);	                //找人物坐标
int  win(int a[15][15]);					//判断游戏是否结束
int  play(int a[15][15]);	                //游戏过程
void play1(void);	                        //游戏关卡

void GameStart();
