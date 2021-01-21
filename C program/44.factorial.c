#include<stdio.h>
int main()
{
    int a,b=1,i;
    printf("Enter Number: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=b*i;
    }
    printf("Factorial of %d is %d",a,b);
}
