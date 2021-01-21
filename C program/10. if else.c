#include<stdio.h>
main()
{
    int i,a;
     for(i=1;i<8;i++)
    {
    printf("Enter a number:");
    scanf("%d",&a);

    (a>0)?printf("The number is positive\n"):printf("number is negative\n");
    }
}
