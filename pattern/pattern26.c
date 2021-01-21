#include<stdio.h>
int main()
{
	int a,i,j;
	printf("Enter Number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for (j=1;j<=a;j++)
		{
			if(j>=((a+1)-i))
			printf("%d ",i);
		    else
		    printf("1 ");	
		}
		printf("\n");
	}
	printf("\n");
}