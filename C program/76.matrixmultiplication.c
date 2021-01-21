#include<stdio.h>
int main()
{
    int m,n,i,j,k,sum=0,A[10][10],B[10][10],C[10][10];
    upper:
    printf("Enter Rows and Coloum of matrix: ");
    scanf("%d%d",&m,&n);
    if(m!=n)
    {
        printf("Number of Rows and Coloum are not equal \nIn Matrix Multiplication Rows and Coloum must be equal \nSo Again ");
        goto upper;
    }
    else
    {
    printf("Enter Elemets of first matrix:\n");
    for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
            scanf("%d",&A[i][j]);
            }
        }
        printf("\n");

        printf("Enter Elemets of second matrix:\n");
    for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
            scanf("%d",&B[i][j]);
            }
        }

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

        printf("Multiplication of matrix:\n");
        for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
                sum=0;
              for(k=0;k<m;k++)
              {
                sum=sum+A[i][k]*B[k][j];
              }
              C[i][j]=sum;
            }
        }
         for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
            printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
    }

}
#include<stdio.h>
int main()
{
    int m,n,i,j,k,sum=0,A[10][10],B[10][10],C[10][10];
    upper:
    printf("Enter Rows and Coloum of matrix: ");
    scanf("%d%d",&m,&n);
    if(m!=n)
    {
        printf("Number of Rows and Coloum are not equal \n In Matrix Multiplication Rows and Coloum must be equal \n So Again ");
        goto upper;
    }
    else
    {
    printf("Enter Elemets of first matrix:\n");
    for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
            scanf("%d",&A[i][j]);
            }
        }
        printf("\n");

        printf("Enter Elemets of second matrix:\n");
    for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
            scanf("%d",&B[i][j]);
            }
        }

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

        printf("Multiplication of matrix:\n");
        for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
                sum=0;
              for(k=0;k<m;k++)
              {
                sum=sum+A[i][k]*B[k][j];
              }
              C[i][j]=sum;
            }
        }
         for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
            printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
    }

}