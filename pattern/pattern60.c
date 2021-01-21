#include<stdio.h>
int main()
{
	int i,j,a=65,x;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=x;j++)
		{
			if(j==i)
			{
				printf("%c",a);
				a++;
			}
			else if(j<=i-1)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}