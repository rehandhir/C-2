#include<stdio.h>
int main()
{
	int i,j,k=1,l,x;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		l=64+i;
		for(j=1;j<=(x*2)-1;j++)
		{
			if(j>=i&&j<=x*2-i&&k)
			{
				printf("%c ",l);
				k=0;
				l++;
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