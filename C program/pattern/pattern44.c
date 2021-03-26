#include<stdio.h>
int main()
{
	int i,j,k=0,l=1,x,h;
	printf("Enter Number: ");
	scanf("%d",&h);
	for(i=1;i<=h*2-1;i++)
	{
		x=1;
		i<=h?k++:k--;
		for(j=1;j<=h*2-1;j++)
		{
			if(j>=h+1-k&&j<=h-1+k&&l)
			{
				printf("%d",x);
				l=0;
				x++;
			}
			else
			{
				printf(" ");
				l=1;
			}
		}
		printf("\n");
	}
	printf("\n");
}