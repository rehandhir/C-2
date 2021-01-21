#include<stdio.h>
main()
{
    int a=30;
    fun(a);
    printf("%d\n",a);
    return 0;
}
int fun(int b)
{
    b=60;
    printf("%d\n",b);
}
