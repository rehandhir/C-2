#include<stdio.h>
int main()
{
	int i,j,x,k=1;
	//printf("Enter Number: ");
	//scanf("%d",&x);
	for(i=1;i<=5;i++)
	{
		for(j=1;j<10;j++)
		{
			if(j<6-i||j>4+i)
			{
				printf(" ");
			}
			else 
				j%2==1?printf("*"):printf("#");
		}
		printf("\n");
	}
}