#include<stdio.h>
main()
{
    char another='y';
    int num;
    for(;another=='y';)
    {
        printf("Enter a number:");
        scanf("%d",&num);
        num=num*num;
        printf("square is %d\n",num);
        printf("want to enter another number:");
        fflush(stdin);
        scanf("%c",&another);
    }
}
