#include"game.h"
void menu()
{
	printf("*********************\n");
	printf("***��ӭ����ɨ������***\n");
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
	printf("�ټ���\n");
	system("pause");
	return 0;
}