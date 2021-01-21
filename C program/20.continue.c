#include<stdio.h>
main()
{
    int i,j;
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;i++)
        {
            if(i==j)
                continue;
            printf("%d%d\n",i,j);

        }
    }
}
