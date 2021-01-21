#include"../ANSICF.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//global declarion of variables and functions
void addtodo();     //add to-do 
void printodo();    //print todo
void savetofile();  //save  in file
void readfile();    //read from file
void getfilesize(); //get size of file
void deletetodo();  //delete to-do
void markcmplt();   //marks to-do as complete 
int menu();         //show option of todo
void option();      //call to-do function
void start();       //start of function
void h_scr();
struct todo
{
    char title[50];
    char creatat[50];
    char cmpleat[50];
    int status;
}todos[100];
int l=0;
FILE *tfp;

int main()
{
    tfp=fopen("TODOS.dat","r");
    if(tfp!=NULL)
        getfilesize();
    system("clear");
    start();
}

void getfilesize()
{
    fseek(tfp, 0L, SEEK_END);
    unsigned int long size = ftell(tfp);
    fseek(tfp, 0L, SEEK_SET);
    l = size / sizeof(struct todo);
}

void start()
{
    FILE *tf;
    tf=fopen("TODOS.dat","r");
    if(tf!=NULL)
    {
        readfile();
    }
    else
    {
        printf("Welcome TO-DO APP\n");
        addtodo();
        savetofile();
    }
    printodo();
    option();
}

void option()
{
    system("clear");
      printodo();
    switch(menu())
    {
        case 1:
            while(getchar()!='\n');
            addtodo();
            break;
        case 2:
            markcmplt();
            break;
        case 3:
            deletetodo();
            break;
        case 4:
            system("clear");
            exit(0);
            break;
        default:
            printf("Invalid Choice\n");
    }
    savetofile();
    option();
} 

int menu()
{
    int ch;
    printf("\n1.Add TODO");
    printf("\n2.Mark as Complete");
    printf("\n3.Delete TODO");
    printf("\n4.Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    return(ch);
}

void readfile()
{
    tfp=fopen("TODOS.dat","r");
    if(tfp==NULL)
    {
        printf("Unable to open file\n");    
        exit(1); 
    }
    else
    {
        for (int i = 0; i < l; i++)
        {
            fread(&todos[i], sizeof(struct todo), 1, tfp);
        }
        fclose(tfp);
    }
}

void addtodo()
{
    //add task
    printf("Enter Your task: ");
    scanf("%[^\n]",todos[l].title);
    //add time
    char todotime[50];
    struct tm ctime;
    time_t timeS = time(NULL);
    localtime_r(&timeS, &ctime);
    snprintf(todos[l].creatat,50,"%i:%i %i/%i",ctime.tm_hour,ctime.tm_min,ctime.tm_mday,ctime.tm_mon+1);
    //status
    todos[l].status=0;
    l++;
}

void printodo()
{    
    printf("+----+--------------------------------+--------------+-------------------------+\n");
    printf("| ID |           Todo Title           |  Created at  |  Status                 |\n");
    printf("+----+--------------------------------+--------------+-------------------------+\n");
    for(int i=0;i<l;i++)
    {
        printf("|%3d | %-30s | %-12s | %s  ", i + 1, todos[i].title, todos[i].creatat, (todos[i].status==0) ? "Not Complete" : "Completed at");
        printf("%-10s|",todos[i].cmpleat);
        printf("\n+----+--------------------------------+--------------+-------------------------+\n");
    }  
}

void markcmplt()
{
    char endtime[50];
    struct tm etime;
    time_t timees = time(NULL);
    localtime_r(&timees,&etime);
    int id;
    printf("Enter your TODO ID for mark as Complete: \n");
    scanf("%d",&id);
    if(id>0&&id<=l)
    {
        id--;
        todos[id].status=1;
        snprintf(todos[id].cmpleat,50,"%i:%i %i/%i",etime.tm_hour,etime.tm_min,etime.tm_mday,etime.tm_mon+1);
        printf("TODO marks as Completed\n");
    }
}

void savetofile()
{
    tfp=fopen("TODOS.dat","w");
    if(tfp==NULL)
    {
        printf("Unable to open file\n");
        exit(1);
    }
    else
    {
        for (int i = 0; i < l; i++)
        {
            fwrite(&todos[i], sizeof(struct todo), 1, tfp);
        }
        fclose(tfp);
    }
}

void deletetodo()
{
    int id;
    printf("Enter your TODO ID for delete: ");
    scanf("%d",&id);
    if(id>0&&id<=l)
    {
        id--;
        memmove(todos+id, todos+id+1, (l-id-1)*sizeof(*todos));
        l--;
        printf("Your TODO has Deleted\n");
    }
    else
        printf("Invalid TODO ID\n");
}

void h_scr()        
{
    char c;
    printf("\n\tPress Enter to continue...");
    while(getchar()!='\n');
    scanf("%c",&c);
}