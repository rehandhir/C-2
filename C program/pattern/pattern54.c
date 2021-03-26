#include<stdio.h>
int main()
{
	int i,j,a,x;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		a=65;
		for(j=1;j<=i;j++)
		{
			printf("%c ",a);
			a++;
		}
		printf("\n");
	}
}