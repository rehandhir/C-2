#include <stdio.h>
int main()
{
	int i,j,k,l,x;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		k=i;
		l=i-1;
		for(j=1;j<=x;j++)
		{
			if(j<=x+1-i)
			{
				printf("%d",k);
				k++;
			}

			else
			{
				printf("%d",l);
				l--;
			}
		}
		printf("\n");
	}
	printf("\n");
}