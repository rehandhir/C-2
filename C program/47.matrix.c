#include<stdio.h>
int main()
{
    int m,n,i,j, A[10][10],B[10][10],C[10][10],D[10][10];
    printf("Enter Rows and Coloum of matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter Elemets of first matrix:\n");
    for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
            scanf("%d",&A[i][j]);
            }
        }
        printf("\n");
        printf("Elements of First matrix:\n");
         for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
            printf("%d\t",A[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");

        printf("Enter Elemets of second matrix:\n");
    for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
            scanf("%d",&B[i][j]);
            }
        }
            printf("\n");

         printf("Elemets of Second matrix:\n");
       for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
            printf("%d\t",B[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");

                printf("Enter Elemets of Third matrix:\n");
    for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
            scanf("%d",&C[i][j]);
            }
        }
            printf("\n");
         printf("Elemets of Third matrix:\n");
       for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
            printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");

        printf("Sum of matrix:\n");
        for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
            D[i][j]=A[i][j]+B[i][j]+C[i][j];
            printf("%d\t",D[i][j]);
            }
            printf("\n");
        }
}
