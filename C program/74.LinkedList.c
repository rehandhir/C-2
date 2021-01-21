#include<stdio.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start=NULL;
struct node* createnode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return(n);
}
void insertnode()
{
    struct node *temp,*t;
    temp=createnode();
    printf("Enter a number: ");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(start==NULL)
        start=temp;
    else
    {
        t=start;
        while(t->link!=NULL)
            t=t->link;
        t->link=temp;
    }
}
//deletion of node
void deletende()
{
    struct node *r;
    if(start==NULL)
        printf("List is empty");
    else
    {
        r=start;
    start=start->link;
    free(r);
    }
}
//traversing
void viewlist()
{
    struct node *t;
    if(start==NULL)
        printf("List is empty");
    else
    {
        t=start;
        while(t!=NULL)
        {
            printf("%d ",t->info);
            t=t->link;
        }
    }
}
int menu()
{
    int ch;
    printf("\n1.Add value");
    printf("\n2.Delete value");
    printf("\n3.View list");
    printf("\n4.Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    return(ch);
}
int main()
{
    while(1)
    {
        system("cls");
        switch(menu())
        {
        case 1:
            insertnode();
            break;
        case 2:
            deletende();
            break;
        case 3:
            viewlist();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice");
        }
         getch();
    }
}
