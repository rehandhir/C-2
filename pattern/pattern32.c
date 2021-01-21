#include<stdio.h>
int main()
{
	int i,j,k=0,a;
	printf("Enter Number: ");
	scanf("%d",&a);
	for(i=1;i<=(a*2)-1;i++)
	{
		i<=a?k++:k--;
		for(j=1;j<=a;j++)
		{
			if(j<=k)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

}