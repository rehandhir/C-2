#include<stdio.h>
int main()
{
	int A[10][10],B[10][10],C[10][10],m,n,i,j;
	printf("Enter Number of rows and coloum of Matrix: ");
	scanf("%d%d",&m,&n);
	printf("Enter Elemets of first Matrix: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("\n");
	printf("Enter Elemets of second Matrix: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	system("clear");
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
	printf("Sum of matrix:\n");
        for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
            C[i][j]=A[i][j]+B[i][j];
            printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
}