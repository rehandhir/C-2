#include<stdio.h>
int main()
{
    int n,i;
    printf("How many todos would you like to add?\n");
    scanf("%d", &n);
    char todo[n][20];
    for(i = 1; i<=n; i++)
    {
        printf("Enter a todo: ");
        scanf("%s",&todo[i]);
    }

    for ( i = 1; i <=n; i++)
    {
        printf("%s\n", todo[i]);
    }
    


    return 0;
}