#pragma once


#include <stdio.h>

IMAGE img[8];
void blank(int x1, int y1);	                //���յ�
void man(int x1, int y1);                	//��Ƥ����
void box(int x1, int y1);	                //������
void dest(int x1, int y1);					//��Ŀ�ĵ�
void man1(int x1, int y1);	                //����Ŀ�ĵ��ϵ�Ƥ����
void box1(int x1, int y1);					//����Ŀ�ĵ��ϵ�����
void wall(int x1, int y1);	                //��Χǽ
void man1(int x1, int y1);					//����ʤ����Ƥ����
void print(int a[15][15]);	                //���������ȫ������
void move(int a[15][15], int x1, int y1);	//�ƶ�
void find(int a[15][15]);	                //����������
int  win(int a[15][15]);					//�ж���Ϸ�Ƿ����
int  play(int a[15][15]);	                //��Ϸ����
void play1(void);	                        //��Ϸ�ؿ�

void GameStart();
