#include<stdio.h>
int main()
{
	int i,j,k,x;
	printf("Enter Number Upto You want to Print Table: ");
	scanf("%d",&x);
	for (i=1;i<=10;i++)
	{
		for (j=1;j<=x;j++)
		{
			printf("%d*%d=%d\t\t",i,j,i*j);
		}
		printf("\n");
	}
}