#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
            printf("%d ",i);
        else
            printf("%c ",64+i/2);
    }
    printf("\n");
}