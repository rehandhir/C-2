#include<stdio.h>
int main()
{
    int i;
    float marks[5]={};
    printf("Enter name of student\n");
    for(i=0;i<5;i++)
    {
        scanf("%f",&marks[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%.2f",marks[i]);
    }
}
