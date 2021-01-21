#include<stdio.h>
int main()
{
	int i,j,a=65,x;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		
		for(j=1;j<=i;j++)
		{
			printf("%c ",a);
			a--;
		}
		printf("\n");
		a=65+i;
	}
}