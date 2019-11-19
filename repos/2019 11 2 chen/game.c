#include "game.h"
void SetMine(char board[][COL], int row, int col, int* x_p, int* y_p)
{
	int count = NUM;
	while (count > 0)
	{
		int x = rand() % (row - 2) + 1;
		int y = rand() % (col - 2) + 1;
		if (board[x][y] == 'o')
		{
			board[x][y] = '1';
			count--;
		}
	}
	int i = 1;
	for (; i <= 10; i++)
	{
		int j = 1;
		for (; j <= 10; j++)
		{
			if (board[i][j] == '0')
			{
				*x_p = i;
				*y_p = j;
				break;
			}
		}


	}
}
void ShowBoard(char board[][COL], int row, int col)
{
	int i = 0;
	for (; i <= 10; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (; i <= 10; i++)
	{
		printf("____");
	}
	printf("\n");
	for (i = 1; i <= 10; i++)
	{
		printf("%d |", i);
		for (int j = 1; j <= 10; j++)
		{
			printf(" %c |", board[i][j]);
		}
	}
	printf("\n");
	for (int k = 1; k <= 10; k++)
	{
		printf("____");
	}
	printf("\n");
}
int Getcount(char board[][COL], int x, int y)
{
	return	board[x - 1][y - 1] + board[x - 1][y] + board[x - 1][y + 1] + board[x][y - 1] + board[x][y + 1] + board[x + 1][y - 1] + board[x + 1][y] + board[x + 1][y + 1] - 8 * '0';
}
void game()
{
	srand((unsigned long)time(NULL));
	char mine_board[ROW][COL];
	char show_board[ROW][COL];
	memset(mine_board, '0', sizeof(mine_board));
	memset(show_board, '*', sizeof(show_board));
	int no_x;
	int no_y;
	SetMine(mine_board, ROW, COL, &no_x, &no_y);
	int x = 0;
	int y = 0;
	int times = 100 - NUM;
	do
	{
		ShowBoard(show_board, ROW, COL);
		printf("please enter <x,y> :");
		scanf("% d %d ", &x, &y);
		if (x < 1 || x>10 || y < 0 || y>10)
		{
			printf("你输入的坐标越界了，请重新输入!\n");
			continue;
		}
		if (show_board[x][y] != '*')
		{
			printf("该位置已经被排除过了，请重新输入！\n");
			continue;
		}
		if (mine_board[x][y] == '1')
		{
			if (times == 80)
			{
				mine_board[x][y] = '0';
				mine_board[no_x][no_y] = '1';
			}
			printf(" game over!\n");
			ShowBoard(mine_board, ROW, COL);
			break;
		}
		int count = GetCount(mine_board, x, y);
		show_board[x][y] = count + '0';
		times--;
	} while (times > 0);
}

