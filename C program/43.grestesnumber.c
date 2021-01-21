#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d%d%d",&a,&b,&c);
    if((a<b)&&(a<c))
    printf("Smallest integer is %d",a);
    else
    {
        if (b>c)
            printf("Smallest integer is %d",c);
        else
            printf("Smallest integer is %d",b);
    }
}
