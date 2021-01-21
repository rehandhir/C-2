#include <stdio.h>
int main()
{
	int i,j,k,l,x;
	printf("Enter Numbr: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		k=i*2-1;
		l=1;
		for(j=1;j<=x;j++)
		{
			if(j<=x+1-i)
			{
				printf("%d ",k);
				k+=2;
			}
			else
			{
				printf("%d ",l);
				l+=2;
			}
		}
		printf("\n");
	}
}