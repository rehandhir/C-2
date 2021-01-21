#include<stdio.h>
int main()
{
	int i,j,k,x;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=x;i>=1;i--)
	{
		for(j=1;j<=x*2-1;j++)
		{
			if(j>=i&&j<=x*2-i)
			{
				printf("**");
			}
			else
			{
				printf("  ");
			}
		}
		k=k-2;
		printf("\n");
	}
}