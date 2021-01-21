#include<stdio.h>
int main()
{
	int a,i,j,k,h;
	printf("Enter Number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		k=1;
		h=1;
		for (j=1;j<=(a*2)-1;j++)
		{
			if(j>=i&&j<=(a*2)-i&&k)
			{
			printf("%d ",h);
			h++;
			k=0;
		    }
		    else
		    {	
		    printf("  ");
		    k=1;
		    }	
		}
		printf("\n");
	}
	printf("\n");
}