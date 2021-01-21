#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter any number:");
    scanf("%d",&a);
    b=fact(a);
    printf("factorial of %d is:%d",a,b);
}
int fact(int x)
{
    int f=1,i;
    for(i=x;i>=1;i--)
        f=f*i;
    return (f);
}
