#include <stdio.h>
extern int x, y, fruitx, fruity, flag, game_end, score, height, width;
extern int piece, tailx[100], taily[100];

void setup()
{
level1:
    fruitx = rand() % 20;
    if (fruitx == 0 || fruitx == width - 2)
    {
        goto level1;
    }

level2:
    fruity = rand() % 20;
    if (fruity == 0 || fruity == height - 2)
    {
        goto level2;
    }
}