#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two Numbers: ");
    scanf("%d %d",&a,&b);
    c=a+b;
    if(c%2==0)
        printf("%d is Even",c);
    else
        printf("%d is odd",c);
}
