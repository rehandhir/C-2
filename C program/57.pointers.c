#include<stdio.h>
int main()
{
    int i,*j;
    i=3; j=&i;
    printf("Address of i=%u\n",&i);
    printf("Address of i=%u\n",j);
    printf("Address of j=%u\n",&j);
    printf("value of j= %u\n",j);
    printf("Value of i=%d\n",i);
    printf("Value of i=%d\n",*(&i));
    printf("Value of i=%d\n",*j);
}

/*Address of i=6422044
Address of i=6422044
Address of j=6422032
value of j= 6422044
Value of i=3
Value of i=3
Value of i=3*/
