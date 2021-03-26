#include<stdio.h>
int main()
{
	int a,i,j,x,k;
	printf("Enter Number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		k=1;
		x=1;
		for (j=1;j<=(a*2)-1;j++)
		{
			
			if(j>=(a+1)-i&&j<=(a-1)+i&&k)
			{

				if(i%2!=0)
			    printf("* ");
		       else
		       {
		       	   printf("%d ",x);
		           x++;
		       }
		       
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