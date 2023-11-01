#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#define ROWS 9
#define COLS 9
#define ROW ROWS+2
#define COL COLS+2
//≥ı ºªØ∆Â≈Ã
void IntiBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int cols);


