#include<stdio.h>
int main()
{
    int a[5],*p;
    p=&a[0];
    input(a);
    disp(a);
    sort(a);
    disp(a);
}
void input(int *p)
{
    int i;
    for(i=0;i<=4;i++)
    {
        scanf("%d",p+i);
    }
}
void disp(int *p)
{
    int i;
    for(i=0;i<=4;i++)
    {
        printf("\n\n\%d",*(p+i));
    }
}
void sort(int *p)
{
    int rou,t,i;
    for(rou=1;rou<=4;rou++)
    {
        for(i=0;i<=3;i++)
        {
            if(*(p+i)>*(p+i+1))
            {
                t=*(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1)=t;
            }
        }
    }
}
