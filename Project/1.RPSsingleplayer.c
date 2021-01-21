#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int start();
void disp();
char name();
int show();
void setup();
void logic();
char nam[50];
int computer,player;
int main()
{
    while(1)
    {
         disp();
    }
}
int start()
{
    int st;
    printf("\n\t1.Play Game\n");
    printf("\t2.Exit\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&st);
    return(st);
}
void disp()
{

    int di = start();
    system("clear");
    switch(di)
    {
    case 1:
      name();
      system("clear");
      setup();
      logic();
        break;
    case 2:
        exit(0);
    default:
         printf("\n\t\tINVALID CHOICE\n");
    }
}
char name()
{
    printf("\n\tEnter Your Name: ");
    scanf("%s",nam);
}
int show()
{
   int ch;
	printf("\n\t1.Rock\n");
	printf("\t2.Paper\n");
	printf("\t3.Scissor\n");
	printf("\tEnter your choice: ");
	scanf("%d",&ch);
	return (ch);
}
void setup()
{
	label:
	computer= rand()%4;
	if(computer==0)
		goto label;

	player=show();
}
void logic()
{
    switch(player)
    {
    case 1:
        if(computer==1)
            printf("\n\tGame Draw\n");
        else if(computer==2)
            printf("\n\tComputer Win\n");
        else if(computer==3)
            printf("\n\t %s Win\n",nam);
        break;
    case 2:
         if(computer==1)
            printf("\n\t%s Win\n",nam);
        else if(computer==2)
            printf("\n\tGame Draw\n");
        else if(computer==3)
            printf("\n\tComputer Win\n");
        break;
    case 3:
         if(computer==1)
            printf("\n\tComputer Win\n");
        else if(computer==2)
            printf("\n\t%s Win\n",nam);
        else if(computer==3)
            printf("\n\tGame Draw\n");
        break;
    default :
        printf("\n\t\tInvalid Choice\n");
    }
}
