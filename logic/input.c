#include <stdio.h>
#include <conio.h>
extern int x, y, fruitx, fruity, flag, game_end, score, height, width;
extern int piece, tailx[100], taily[100];

void input()
{

    if (kbhit())
    {

        switch (getch())
        {
        case 'w':
            flag = 1;
            break;
        case 's':
            flag = 2;
            break;
        case 'a':
            flag = 3;
            break;
        case 'd':
            flag = 4;
            break;
        }
    }
}