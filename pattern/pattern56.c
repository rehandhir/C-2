#include<stdio.h>
int main()
{
	int i,j,a=65,b=97,x;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2!=0)
				printf("%c ",a);
			else
				printf("%c ",b);
		}
		printf("\n");
		a++;
		b++;
	}
}