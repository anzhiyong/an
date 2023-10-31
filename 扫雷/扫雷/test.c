#define _CRT_SECURE_NO_WARNINGS
#include"game.c"
void menu(void)
{
	printf("**************\n");
	printf("**1.star******\n");
	printf("**0.exit******\n");
	printf("**************\n");
}
void game()
{
	int iniboord[ROWS][COLS];
	int iniboord[ROWS][COLS];
}
int main()
{
	int input = 0;
	
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("É¨À×");
			break;
		case 0:
			printf("ÓÎÏ·½áÊø");
			break;
		default:printf("ÊäÈë´íÎó");   
		}
	} while (input);
	


}