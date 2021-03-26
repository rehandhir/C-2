#include<stdio.h>
int main()
{
	int a,i,j,k=1;
	printf("Enter Number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	
		for (j=1;j<=a;j++)
		{
			if(j<=i)
			{
			printf("%d ",k);
			
		    }
		    else
		    {	
		    printf("  ");
		    
		    }	
		}
		printf("\n");
		k++;
	}
	printf("\n");
}