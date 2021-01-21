
#include <stdio.h>

int main()
{
    int r,c,a[10][10]={};
    int i,j,k=0,l=0;
    /*k=starting row index
    r= ending row index
    l= starting column index
    c=ending column index*/
    printf("Enter Row and Column of matrix: ");
    scanf("%d%d",&r,&c);
    printf("Enter Elemets of matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Given Matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    while(k<r&&l<c)
    {
        for(i=l;i<c;i++)
        {
            printf("%d ",a[k][i]);
        }
        k++;
        for(i=k;i<r;i++)
        {
            printf("%d ",a[i][c-1]);
        }
        c--;
        if(k<r)
        {
            for(i=c-1;i>=l;i--)
            {
                printf("%d ",a[r-1][i]);
            }
            r--;
        }
        if(l<c)
        {
            for(i=r-1;i>=k;i--)
            {
                printf("%d ",a[i][l]);
            }
            l++;
        }
    }
    printf("\n");
}
