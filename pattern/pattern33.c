#include<stdio.h>
int main()
{
	int i,a;
	printf("Enter Number: ");
	scanf("%d",&a);
	for(i=-a;i<=a;i++)
	{
		printf("%d\t",i);
	}
	printf("\n");
}