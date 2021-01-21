#include<stdio.h>
int main()
{
	int i,j,h,k,x;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		h=i;
		k=1;
		for(j=1;j<=x;j++)
		{
			if(j<=x+1-i)
			{
				printf("%d ",h);
				h++;
			}
			else
			{
				printf("%d ",k);
				k++;
			}
		}
		printf("\n");
	}
}