#include <stdio.h>
int main()
{
	int i,j,k;
	printf("Enter Number: ");
	scanf("%d",&k);
	for(i=k;i>=1;i--)
	{
		for(j=i;j>=1;j--)
				printf("%d ",j);
	printf("\n");
	}
	for(i=1;i<=k;i++)
	{
		for(j=i;j>=1;j--)
				printf("%d ",j);
	printf("\n");
	}

}