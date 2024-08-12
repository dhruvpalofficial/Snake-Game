#include <stdio.h>
extern int x, y, fruitx, fruity, flag, game_end, score, height, width;
extern int piece, tailx[100], taily[100];

void draw()
{
    int ch;
    system("cls");
    for (int i = 0; i <= height; i++)
    {
        for (int j = 0; j <= width; j++)
        {
            if (i == 0 || i == height || j == 0 || j == width)
            {
                printf("*");
            }
            else
            {
                if (i == x && j == y)
                {
                    printf("0");
                }
                else if (i == fruitx && j == fruity)
                {
                    printf("@");
                }
                else
                {
                    ch = 0;
                    for (int k = 0; k < piece; k++)
                    {
                        if (i == tailx[k] && j == taily[k])
                        {
                            printf("O");
                            ch = 1;
                        }
                    }
                    if (ch == 0)
                        printf(" ");
                }
            }
        }
        printf("\n");
    }
}