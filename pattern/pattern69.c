#include<stdio.h>
int main()
{
	int i,j,x,a=65,k=1;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		for(j=1;j<x*2;j++)
		{
			if(j>=x+1-i&&j<=x-1+i&&k)
			{
				printf("%c ",a);
				a++;
				k=0;
			}
			else
			{
				printf("  ");
				k=1;
			}
		}
		printf("\n");
	}
}