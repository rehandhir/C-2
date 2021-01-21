#include<stdio.h>
int main()
{
    int i,j,x,y;
    printf("Enter Number: ");
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
    {
        for(j=2;j<i;j++)
        {
             if(i%j==0)
                break;
        }
            if(j==i)
        printf("%d\n",i);
    }
}
