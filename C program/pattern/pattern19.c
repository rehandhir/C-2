#include<stdio.h>
int main()
{
	int a,i;
	printf("Enter Number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if (i%2==0)
	{
		printf("$ ");
	}
	else
		printf("%d ",i);
	}
	printf("\n");
}