#include<stdio.h>
int main()
{
	int i,j,k,a=0,b;
	printf("Enter Number: ");
    scanf("%d",&b);
	for(i=1;i<=b;i++)
		{
			a++;
			k=1;
		for (j=1;j<=(b*2)-1;j++)
		{
		 	if(j>=i&&j<=(b*2)-i&&k)
		 	{
		 		printf("%d",a);
		 		a++;
		 		k=0;
		 	}
		 	else
		 	{
		 		printf(" ");
		 		k=1;
		 	}
		 	
		}
		a=i;
		printf("\n");
	}
	a=5;
	for(i=b;i>=1;i--)
	{
		a--;
		k=1;
		for (j=1;j<=(b*2)-1;j++)
		{
			if(j>=i&&j<=(b*2)-i&&k)
			{
				printf("%d",a);
				a++;
				k=0;
			}
			else
			{
				printf(" ");
				k=1;
			}
		}
		a=i;
		printf("\n");
	}	
}