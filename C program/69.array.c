#include<stdio.h>
int main()
{
    int i;
    char std[10]={};
    printf("Enter name of student\n");
    for(i=0;i<10;i++)
    {
        scanf("%c",&std[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%c",std[i]);
    }
}
