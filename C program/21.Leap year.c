#include <stdio.h>
void main()
{
    int year;
    while(1)
    {
    printf("Enter the year : ");
    scanf("%d",&year);

        if(year%4==0)
        {
            printf("%d is leap year.\n",year);
        }
        else
        {
            printf("%d is ordinary year.\n",year);
        }
    }
}
