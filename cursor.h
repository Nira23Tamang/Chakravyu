#ifndef cursor_h
#define cursor_h
#include <windows.h>
#include <conio.h>
int checker = 0;
void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
#endif
