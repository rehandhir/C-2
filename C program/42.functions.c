
#include<stdio.h>
int sum(int x , int y); //function proto-type;
int mult(int x , int y) //return-type
{
    return(x*y);
}
void main()
{
     int a,b,c,d ,e,f,g;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    e=sum(a,b);  //sum function is invoked;
    f=sum(c,d);

    g = mult(e,f); //mult function is invoked;

    printf("%d\n",g);

    return;
}

int sum(int x , int y){  // function defination
    return(x+y);
}
