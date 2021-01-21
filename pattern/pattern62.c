#include<stdio.h>
int main()
{
	int i,j,l,x;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=x;i>=1;i--)
	{
		l=x;
		for(j=1;j<=x;j++)
		{
			if(j<=x+1-i)
			{
				printf("%d",l);
				l--;
			}
			else
			{
				printf("%d",i);
			}
		}
		printf("\n");
	}
}