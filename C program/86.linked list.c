#include<stdio.h>
#include<stdlib.h>
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
int main()
{
	insertnode();
}