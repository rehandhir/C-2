//Tic Tac Toe multiplayer game
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int start();      //print game menu on screen
void game();      //call function for game
void g_name();    //print tictactoe on screen
void p_name();    //take player name as input
void design();    //print pattren of game
void input_pos(); //take position as input
int chk_pos();    //check pattern for result
void result();    //check result
void final(int);  //print result
void h_scr();     //hold screen
void g_result();  //check result
int l = 1, i_pos = 0, count = 0;
int g_play = 0, p1_win = 0, p2_win = 0, g_draw = 0;
int pl = 0, m = 0, b[99] = {}, h = 0;
char p1[20], p2[20];
char a[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char win[99][20], p1_n[99][20], p2_n[99][20];
int main()
{
    while (1)
    {
        system("clear||cls");
        switch (start())
        {
        case 1:
            g_play++;
            game();
            break;
        case 2:
            g_result();
            break;
        case 3:
            system("clear||cls");
            exit(0);
        default:
            printf("\n\tInvalid choice");
            h_scr();
        }
        count = 0;
        l = 1;
        i_pos = 0;
        for (int i = 0; i < 9; i++)
            a[i] = i + 49;
    }
}
int start()
{
    int ch;
    printf("\n\t1.Play TicTacToe");
    printf("\n\t2.Game Result");
    printf("\n\t3.Exit");
    printf("\n\tEnter your choice: ");
    scanf("%d", &ch);
    return (ch);
}
void game()
{
    char m;
    system("clear||cls");
    g_name();
    p_name();
    system("clear||cls");
    while (l) //loop will continue until l==1
    {
        g_name();
        design();
        input_pos();
        system("clear||cls");
        g_name();
        design();
        result();
        system("clear||cls");
    }
}
void g_name()
{
    printf("\n\n\t\t\t TicTacToe\n");
}
void p_name()
{
    printf("\tEnter Player1 name: ");
    while (getchar() != '\n')
        ; //clear||cls input buffer
    scanf("%[^\n]", p1);
    strcpy(p1_n[pl], p1); //copy player1 name
    printf("\tEnter Player2 name: ");
    while (getchar() != '\n')
        ;
    scanf("%[^\n]", p2);
    strcpy(p2_n[pl], p2); //copy player2 name
    pl++;
}
void design()
{
    printf("\n");
    puts("\t\t\t|---|---|---|");
    printf("\t\t\t| %c | %c | %c |\n", a[0], a[1], a[2]);
    puts("\t\t\t|---|---|---|");
    printf("\t\t\t| %c | %c | %c |\n", a[3], a[4], a[5]);
    puts("\t\t\t|---|---|---|");
    printf("\t\t\t| %c | %c | %c |\n", a[6], a[7], a[8]);
    puts("\t\t\t|---|---|---|");
}
void input_pos()
{
    char ch;
    int pos, i, flag1;
    if (i_pos == 0)
    {
        do
        {
            if (flag1 == 1)
                printf("\n\tWrong Input!");
            printf("\n\t%s Enter your position: ", p1);
            // while (getchar() != '\n');
            // scanf("%c", &ch); //take position input from player 1
            scanf("%d",&pos);
            ch = 48+(char)pos;
            if (ch == '0' || ch == 'x')
                flag1 = 1;
            else
            {
                flag1 = 1;
                for (i = 0; i < 9; i++)
                {
                    if (a[i] == ch)
                    {
                        a[i] = 'x';
                        flag1 = 0;
                        break;
                    }
                }
            }
        } while (flag1 != 0);
        i_pos = 1;
    }
    else
    {
        do
        {
            if (flag1 == 1)
                printf("\n\tWrong Input!");
            printf("\n\t%s enter your position: ", p2);
            scanf("%d",&pos);
            ch = 48+(char)pos;
            if (ch == '0' || ch == 'x')
                flag1 = 1;
            else
            {
                flag1 = 1;
                for (i = 0; i < 9; i++)
                {
                    if (a[i] == ch)
                    {
                        a[i] = '0';
                        flag1 = 0;
                        break;
                    }
                }
            }
        } while (flag1 != 0);
        i_pos = 0;
    }
    count++;
}
int chk_pos()
{
    if ((a[0] == 'x' && a[1] == 'x' && a[2] == 'x') || (a[0] == 'x' && a[3] == 'x' && a[6] == 'x') || (a[0] == 'x' && a[4] == 'x' && a[8] == 'x'))
        return (0);
    else if ((a[0] == '0' && a[1] == '0' && a[2] == '0') || (a[0] == '0' && a[3] == '0' && a[6] == '0') || (a[0] == '0' && a[4] == '0' && a[8] == '0'))
        return (1);
    else if (a[1] == 'x' && a[4] == 'x' && a[7] == 'x')
        return (0);
    else if (a[1] == '0' && a[4] == '0' && a[7] == '0')
        return (1);
    else if ((a[2] == 'x' && a[5] == 'x' && a[8] == 'x') || (a[2] == 'x' && a[4] == 'x' && a[6] == 'x'))
        return (0);
    else if ((a[2] == '0' && a[5] == '0' && a[8] == '0') || (a[2] == '0' && a[4] == '0' && a[6] == '0'))
        return (1);
    else if (a[3] == 'x' && a[4] == 'x' && a[5] == 'x')
        return (0);
    else if (a[3] == '0' && a[4] == '0' && a[5] == '0')
        return (1);
    else if (a[6] == 'x' && a[7] == 'x' && a[8] == 'x')
        return (0);
    else if (a[6] == '0' && a[7] == '0' && a[8] == '0')
        return (1);
    else
        return (2);
}
void result()
{
    int r = chk_pos();
    if (count < 9)
    {
        if (r == 2)
            ;
        else
            final(r); //pass argument to print result
    }
    else
        final(r);
}
void final(int r)
{
    if (r == 0)
    {
        printf("\n\t%s Win\n", p1);
        strcpy(win[m], p1); //copy winner name
        p1_win++;
    }
    else if (r == 1)
    {
        printf("\n\t%s Win\n", p2);
        strcpy(win[m], p2);
        p2_win++;
    }
    else
    {
        printf("\n\tGame Draw\n");
        g_draw++;
    }
    if (r == 1 || r == 0)
        b[m] = 1;
    else
        b[m] = 0;
    m++;
    h_scr();
}
void h_scr()
{
    l = 0;
    printf("\n\tPress Enter to continue...");
    while (getchar() != '\n')
        ;
    getchar();
}
void g_result()
{
    system("clear||cls");
    printf("\n\t\t\tResult Sheet");
    printf("\n\tGame played: %d", g_play);
    printf("\n\tx Win: %d\t 0 Win: %d\t Game Draw: %d\n", p1_win, p2_win, g_draw);
    for (int i = 0; i < g_play; i++)
    {
        printf("\n\tGame %d", i + 1);
        printf("\n\tPlayer1: %s\t Player2: %s", p1_n[i], p2_n[i]);
        if (b[i] == 1)
            printf("\n\tWinner: %s\n", win[i]);
        else
            printf("\n\tGame Draw\n");
    }
    h_scr();
}