#include<stdio.h>
void table();
void pattern();
int main()
{
	int x;
	printf("Enter Number: ");
	scanf("%d",&x);
	if(x>10)
		table();
	else if(x>6)
		pattern();
	else
		printf("Have a nice day!");
}
void table()
{
	int t,i;
	printf("Enter Number To Print Table: ");
	scanf("%d",&t);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d",t,i,t*i);
		printf("\n");
	}
}
void pattern()
{
	int i,j,x;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		for(j=1;j<x*2;j++)
		{
			if(j==x+1-i||j==x-1+i)
				printf("#");
			else if(j<x+1-i||j>x-1+i)
				printf(" ");
			else
				printf(".");
		}
		printf("\n");
	}
}
