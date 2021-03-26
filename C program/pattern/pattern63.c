#include<stdio.h>
int main()
{
	int i,j,x,l;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=1;i<=x+1;i++)
	{
		l=1;
		for(j=1;j<=x*2+1;j++)
		{
			if(j==x+1)
				printf("0");
			else if(j>=x+2-i&&j<=x+i)
			{
				printf("%d",l);
			}
			else
			{
				printf(" ");
			}
			j<=x?l++:l--;
		}
		printf("\n");
	}
}