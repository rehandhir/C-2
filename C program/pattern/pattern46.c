#include<stdio.h>
int main()
{
	int i,j,s;
	printf("Enter Number: ");
	scanf("%d",&s);
	for(i=1;i<=s;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d",j);
		for(j=i;j<s;j++)
			printf("  ");
		for(j=i;j>=1;j--)
			printf("%d",j);
		
		printf("\n");
	}
}