#include <stdio.h>
#include <conio.h>
extern int x, y, fruitx, fruity, flag, game_end, score, height, width;
extern int piece, tailx[100], taily[100];
void logic()
{
    int prevx, prevy, prev2x, prev2y;
    prevx = tailx[0];
    prevx = taily[0];
    tailx[0] = x;
    taily[0] = y;
    for (int i = 0; i <= piece; i++)
    {
        prev2x = tailx[i];
        prev2y = taily[i];
        tailx[i] = prevx;
        taily[i] = prevy;
        prevx = prev2x;
        prevy = prev2y;
    }
    switch (flag)
    {
    case 1:
        x--;
        break;
    case 2:
        x++;
        break;
    case 3:
        y--;
        break;
    case 4:
        y++;
        break;
    }
    if (x == 0 || x == height || y == 0 || y == width)
    {
        game_end = 1;
    }
    if (x == fruitx && y == fruity)
    {
    level3:
        fruitx = rand() % 20;
        if (fruitx == 0)
        {
            goto level3;
        }

    level4:
        fruity = rand() % 20;
        if (fruity == 0)
        {
            goto level4;
        }
        piece++;
        score += 10;
    }
}