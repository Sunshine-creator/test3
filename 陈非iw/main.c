#include"game.h"
void menu()
{
	printf("*********************\n");
	printf("***欢迎来到扫雷世界***\n");
	printf("*1.play       2.exit*\n");
	printf("*********************\n");
	printf(" please enter your select :");
}
int main()
{
	menu();
	int select = 0;
	scanf(" %d", &select);
	int quit = 0;
	while (!quit)
	{
		switch (select)
		{
		case 1:
			game();
			break;
		case 2:
			quit = 1;
			break;
		default:
			printf(" your select is illegal,please check it and try again!\n");
			
		}
	}
	printf("再见！\n");
	system("pause");
	return 0;
}