#include<stdio.h>
int main()
{
    int i,fact=1,x;
    scanf("%d",&x);
    for(i=1;i<=x;i++);
        {
            fact=fact*i;
        }
        printf("%d",fact);
}
