#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=2;i<=10;i+=2)
	{
		for (j=1;j<=17;j++)
		{
			if(j>=11-i&&j<=7+i&&j%2!=0)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}