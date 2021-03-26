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
			if(j<=i)
			{
			printf("%d ",i-j+1);
		    }
		    else
		    {	
		    printf("  ");
		    
		    }	
		}
		printf("\n");
	}
	printf("\n");
}