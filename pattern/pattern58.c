#include<stdio.h>
int main()
{
	int i,j,a=65,x;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=x*2-1;j++)
		{
			if(j>=x+1-i&&j<=x-1+i)
			{
				printf("%c ",a);
				j<x?a--:a++;
			}
			else
			{
				printf("  ");
			}
		}
		a=65+i;
		printf("\n");
	}
}