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
	//���䱾�����Ļ���
	setlocale(LC_ALL, "");

	//̰������Ϸ������
	test();
	return 0;
}