#include<stdio.h>
int main()
{
	int i,j,h,x;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=x;i>=1;i--)
	{
		h=i;
		for(j=1;j<=x;j++)
		{
			if(j<=x+1-i)
			{
				printf("%d ",h);
				h++;
			}
			else
			{
				printf("%d ",x);
			}
		}
		printf("\n");
	}
}