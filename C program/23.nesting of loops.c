 #include<stdio.h>
 main()
 {
     int r,c,i,sum;
     for(r=1;r<=3;r++)
     {
         for(c=1;c<=5;c++)
         {
             for(i=1;i<=4;i++)
             {
               sum=r+c+i;
               printf("r=%dc=%di=%d\nsum=%d\n",r,c,sum);
            }
         }
    }
 }
