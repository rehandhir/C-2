#include<stdio.h>
int main()
{
	int i,j,a,x;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		a=65;
		for(j=1;j<=x*2-1;j++)
		{
			if(j>=x+1-i&&j<=x-1+i)
			{
				printf("%c ",a);
				j<x?a++:a--;
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}