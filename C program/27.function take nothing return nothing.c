#include<stdio.h>
void add(void);
void add()
{
    int a,b,c;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is:%d\n",c);
    }
main()
{
  add();
}
