#include<stdio.h>
int main()
{
	int i,j,k,x;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		k=1;
		for(j=1;j<=x*2-1;j++)
		{
			if(j>=x+1-i&&j<=x-1+i)
			{
				printf("%d ",k);
				j<x?k++:k--;
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}