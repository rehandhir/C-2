#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3],i,j;
    printf("Enter elements of first matrix: ");
    for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    {
      scanf("%d",&A[i][j]);
    }
    for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    {
        printf("%d",A[i][j]);
    }
    printf("Enter Elements of second matrix: ");
     for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    {
        scanf("%d",&B[i][j]);
    }
    for(i=0;i<=2;i++)
    {
    for(j=0;j<=2;j++)
      {
        C[i][j]=A[i][j]+B[i][j];
          printf("%d\t",C[i][j]);
        }
    printf("\n");
    }

}
