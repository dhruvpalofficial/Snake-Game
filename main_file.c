#include "logic/input.c"
#include "intro/print.c"
#include "logic/logic.c"
#include "setup/draw.c"
#include "setup/setup.c"
#include "exit/exit.c"

#include <stdio.h>
#include <windows.h>
int height = 20, width = 20, x, y, fruitx, fruity, flag, game_end = 0, score = 0;
int piece = 0;
int tailx[100], taily[100];

int main()
{
    print();
    x = height / 2;
    y = width / 2;
    setup();
    while (game_end != 1)
    {
        input();
        draw();
        logic();
        Sleep(60);
    }
    exit_game();
}