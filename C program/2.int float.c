#include<stdio.h>
float main()
{
    float a,b,c;
    printf("enter the first number:");
    scanf("%f",& a);
    printf("enter the second number:");
    scanf("%f", & b);
    printf("enter the third number:");
    scanf("%f", & c);
    float d = a*b*c;
    printf("Multiplying three number %f",d);
}
