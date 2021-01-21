#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int start();
int menu();
void setup();
void mplayer();
void splayer();
void name();
void slogic();
void mlogic();
char p1[50],p2[50];
int player1,player2,computer;
int main()
{
    while(1)
    {
        setup();
    }
}
int start()
{
    int pl;
    printf("\n\n\t1.Friend");
    printf("\n\t2.Computer");
    printf("\n\t3.Exit");
    printf("\n\tChoose with whom you want to play: ");
    scanf("%d",&pl);
    return(pl);
}
int menu()
{
    int ch;
    printf("\t1.Rock\n");
    printf("\t2.Paper\n");
    printf("\t3.Scissor\n");
    printf("\tSelect your choice: ");
    scanf("%d",&ch);
    return(ch);
}
void setup()
{
   switch(start())
    {
    case 1:
        system("clear");
        mplayer();
        mlogic();
        break;
    case 2:
        system("clear");
        name();
        splayer();
        slogic();
        break;
    case 3:
        exit(0);
    default:
        printf("\n\t\tINVALID CHOICE");
    }
}
void mplayer()
{
    printf("\n\tEnter Player1 name: ");
    while(getchar()!='\n');
    scanf("%s",p1);
    player1=menu();
    system("clear");-
    printf("\n\tEnter Player2 name: ");
    while(getchar()!='\n');
    scanf("%s",p2);
    player2=menu();
}
void splayer()
{
    label:
    computer=rand()%4;
    if(computer==0)
        goto label;
    player1=menu();
}
void name()
{
    printf("\n\tEnter Your Name: ");
   while(getchar()!='\n');
   scanf("%s",p1);
}
void slogic()
{
    switch(player1)
    {
    case 1:
        if(computer==1)
            printf("\n\n\t\tGame Draw");
        else if(computer==2)
            printf("\n\n\t\tComputer win");
        else if(computer==3)
            printf("\n\n\t\t%s Win",p1);
        break;
    case 2:
         if(computer==1)
            printf("\n\n\t\t%s Win",p1);
        else if(computer==2)
            printf("\n\n\t\tGame Draw");
        else if(computer==3)
            printf("\n\n\t\tComputer win");
        break;
    case 3:
         if(computer==1)
            printf("\n\n\t\tComputer win");
        else if(computer==2)
            printf("\n\n\t\t%s Win",p1);
        else if(computer==3)
            printf("\n\n\t\tGame Draw");
        break;
    default:
        printf("\n\n\t\tINVALID CHOICE");
    }
}
void mlogic()
{
        switch(player1)
    {
    case 1:
        if(player2==1)
            printf("\n\n\t\tGame Draw");
        else if(player2==2)
            printf("\n\n\t\t%s Win",p2);
        else if(player2==3)
            printf("\n\n\t\t%s Win",p1);
        break;
    case 2:
         if(player2==1)
            printf("\n\n\t\t%s Win",p1);
        else if(player2==2)
            printf("\n\n\t\tGame Draw");
        else if(player2==3)
            printf("\n\n\t\t%s Win",p2);
        break;
    case 3:
         if(player2==1)
            printf("\n\n\t\t%s Win",p2);
        else if(player2==2)
            printf("\n\n\t\t%s Win",p1);
        else if(player2==3)
            printf("\n\n\t\tGame Draw");
        break;
    default:
        printf("\n\n\t\tINVALID CHOICE");
    }
}

