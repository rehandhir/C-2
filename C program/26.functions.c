#include<stdio.h>
main()
{
    void add(void),oddeven(void);
    add();
    oddeven();
    add();
    getch();
}
void add()
{
    int a,b,c;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is:%d\n",c);
}
void oddeven()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%2==0)
        printf("Number is Even\n");
    else
        printf("Number is odd\n");
}
