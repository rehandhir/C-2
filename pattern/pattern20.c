#include<stdio.h>
int main()
{
	int a,i,b;
	printf("Enter Number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if (i%2!=0)
	{
		printf("* ");
	}
	else
		printf("%d ",i*i);
	}
	printf("\n");
}