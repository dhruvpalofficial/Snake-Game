#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y)

{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void load()
{
    int row, col, r, c, q;

    gotoxy(36, 14);
    printf("loading...");
    gotoxy(30, 15);
    for (r = 1; r <= 20; r++)
    {
        for (q = 0; q <= 100000000; q++)
            ; // to display the character slowly
        printf("%c", 177);
    }
}