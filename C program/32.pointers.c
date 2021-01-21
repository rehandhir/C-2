#include<stdio.h>
main()
{
    int x=5,*j;
    j=&x;
    printf("%d\n",x);
    printf("%u\n",j);
    printf("%u",*j);
}
