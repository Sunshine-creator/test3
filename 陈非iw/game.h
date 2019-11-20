#pragma once
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<time.h>
#pragma warning (disable : 4996)
#define ROW 12
#define COL 12
#define NUM 20
 void game();
  void SetMine(char board [][COL] ,int row,int col);
  void ShowBoard(char board[][COL], int row, int col);
 int Getcount(char board[][COL], int x, int y);