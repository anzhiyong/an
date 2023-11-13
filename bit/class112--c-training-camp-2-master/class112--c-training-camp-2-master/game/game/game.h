#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2



//��ʼ������
void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set);

//��ӡ����
void DisplayBoard(char arr[ROWS][COLS], int row, int col);

//������
void SetMine(char arr[ROWS][COLS], int row, int col);

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);