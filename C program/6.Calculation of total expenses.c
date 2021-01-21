/*calculation of total expenses*/
#include<stdio.h>
main()
{
    int qty,dis;
    float rate,tot;
    while(1)
    {
    printf("Enter quantity and rate");
    scanf("%d%f",&qty,&rate);
    if(qty>1000)
        dis=10;
    else
        dis=0;
    tot=(qty*rate)-(qty*rate*dis/100);
    printf("total expenses=Rs.%f\n",tot);
    }
}
