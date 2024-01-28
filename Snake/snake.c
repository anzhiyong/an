#define _CRT_SECURE_NO_WARNINGS 1

#include"snake.h"

//���ù��λ��
void SetPos(int x,int y)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { x,y };
	SetConsoleCursorPosition(handle, pos);
}
void WelcomeToGame()
{
	SetPos(40, 15);
	printf("��ӭ����̰����");
	SetPos(40, 20);
	system("pause");
	system("cls");

	//���ܽ���
	SetPos(15, 10);
	printf("�� �� . �� . �� . �� �������ߵ��ƶ���F3�Ǽ��٣�F4�Ǽ���");
	SetPos(15, 11);
	printf("�����ܵõ����ߵķ���");
	SetPos(38, 20);
	system("pause");
	system("cls");
}

void CreateMap()
{
	//��
	SetPos(0, 0);
	for (int i = 0; i <= 56; i += 2)
	{
		wprintf(L"%c", WALL);
	}
	//��
	SetPos(0, 26);
	for (int i = 0; i <= 56; i += 2)
	{
		wprintf(L"%c", WALL);
	}
	//��
	for (int i = 1; i <= 25; i ++)
	{
		SetPos(0, i);
		wprintf(L"%c", WALL);
	}
	//��
	for (int i = 1; i <= 25; i++)
	{
		SetPos(56, i);
		wprintf(L"%c", WALL);
	}
}

void InitSnake(pSnake ps)
{
	//�����������ڵ�
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

		//ͷ�巨
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
	//��ӡ�ߵ�����
	cur = ps->pSnake;
	while (cur)
	{
		SetPos(cur->x, cur->y);
		wprintf(L"%lc", BODY);
		cur = cur->next;
	}
	//̰����������Ϣ��ʼ��
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
	//���ÿ���̨
	system("mode con cols=100 lines=30");
	system("title ̰����@��");
	//���ع��
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorinfo;
	GetConsoleCursorInfo(handle, &cursorinfo);
	cursorinfo.bVisible = false;
	SetConsoleCursorInfo(handle, &cursorinfo);
	//��ӡ��ӭ��Ϣ
	WelcomeToGame();
	//���Ƶ�ͼ
	CreateMap();
	//��ʼ����
	InitSnake(ps);
	//����ʳ��
	CreateFood(ps);

	getchar();
}