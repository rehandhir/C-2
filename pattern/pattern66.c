#include<stdio.h>
int main()
{
	int i,j,k=1,x;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
}