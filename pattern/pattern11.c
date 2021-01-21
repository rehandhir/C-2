#include<stdio.h>
int main()
{
	int a,i,j,k;
	printf("Enter Number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		k=1;
		for (j=1;j<=a;j++)
		{
			if(j<=i)
			{
			printf("%d ",k);
			k++;
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