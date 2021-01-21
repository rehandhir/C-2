// Simple Interest using for loop

#include<stdio.h>
 main()
 {
     int i,p,n;
     float si,r;
     for (i=1;i<=3;i++)
     {
         printf("Enter values of p,n,r:");
         scanf("%d%d%f",&p,&n,&r);
         si=p*n*r/100;
         printf("si is %f\n",si);
     }
 }
