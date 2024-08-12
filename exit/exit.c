#include <stdio.h>
#include "record.c"
#include <conio.h>

extern int x, y, fruitx, fruity, flag, game_end, score, height, width;
extern int piece, tailx[100], taily[100];
void exit_game()
{
    int check = 0;
    for (int i = 4; i < piece; i++)
    {
        if (x == tailx[i] && y == taily[i])
        {
            check++;
        }
        if (i == piece || check != 0)
            break;
    }
    if (x <= 10 || x >= 70 || y <= 10 || y >= 30 || check != 0)
    {
        game_end = 1;
        system("cls");
        printf("Game Over\nBetter Luck Next Time!!!\nPress any key to quit the game\n");
        getch();
        record();
    }
}