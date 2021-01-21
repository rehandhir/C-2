#include<stdio.h>
#include<windows.h>
void gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
 main()
{
    gotoxy(30,12);
    printf("Harshit");
    gotoxy(30,13);
    printf("Singh");
}
