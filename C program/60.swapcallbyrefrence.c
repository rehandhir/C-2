#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("a=%d\tb=%d",a,b);
}
void swap(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=*x;
    printf("x=%d\ty=%d\n",*x,*y);
}
