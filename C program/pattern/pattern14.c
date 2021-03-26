#include<stdio.h>
int main()
{
	int a,i,j,k;
	printf("Enter Number: ");
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	{
		k=i;
		for (j=1;j<=a;j++)
		{
			if(j<=(a+1)-i)
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