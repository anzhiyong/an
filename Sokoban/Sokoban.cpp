#define _CRT_SECURE_NO_WARNINGS 1
#undef UNICODE
#undef _UNICODE
#include "Sokoban.h"
#include <graphics.h>
void map(int a[][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			/*putimage(100, 100, );*/
		}
	}
}

void GameStart()
{
	initgraph(1000, 800);
	setbkcolor(WHITE);
	cleardevice();
	loadimage(&img[0], "C:\\Users\\an\\Pictures\\Camera Roll\\0.jpg");
	loadimage(&img[1], "C:\\Users\\an\\Pictures\\Camera Roll\\1.jpg");
	loadimage(&img[2], "C:\\Users\\an\\Pictures\\Camera Roll\\2.jpg");
	loadimage(&img[3], "C:\\Users\\an\\Pictures\\Camera Roll\\3.jpg");
	loadimage(&img[4], "C:\\Users\\an\\Pictures\\Camera Roll\\4.jpg");
	loadimage(&img[5], "C:\\Users\\an\\Pictures\\Camera Roll\\5.jpg");
	loadimage(&img[6], "C:\\Users\\an\\Pictures\\Camera Roll\\6.jpg");
	loadimage(&img[7], "C:\\Users\\an\\Pictures\\Camera Roll\\7.jpg");
	//putimage(100, 100, &img[1]);
	//game();
	putimage(100, 100, &img[1]);
	int a[10][10] = { {0},
						{0, 0, 6, 6, 6},
						{0, 0, 6, 3, 6},
						{0, 0, 6, 0, 6, 6, 6, 6},
						{6, 6, 6, 2, 0, 2, 3, 6},
						{6, 3, 0, 2, 1, 6, 6, 6},
						{6, 6, 6, 6, 2, 6},
						{0, 0, 0, 6, 3, 6},
						{0, 0, 0, 6, 6, 6} };
	//map(a);
}