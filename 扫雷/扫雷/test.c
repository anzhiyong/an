#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu(void)
{
	printf("**************\n");
	printf("**1.star******\n");
	printf("**0.exit******\n");
	printf("**************\n");
}
void game()
{
	char mine[ROWS][COLS];//��Ų��úõ���
	char show[ROWS][COLS];//
	//��ʼ������
	IntiBoard(mine, ROWS, COLS, '0');
	IntiBoard(show, ROWS, COLS, '*');
	//��ӡ����
	DisplayBoard(show, ROW, COL);
}
int main()
{
	int input = 0;
	
	do
	{
		menu();
		printf("��ѡ��->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("ɨ��");
			break;
		case 0:
			printf("��Ϸ����");
			break;
		default:printf("�������");   
		}
	} while (input);
	


}