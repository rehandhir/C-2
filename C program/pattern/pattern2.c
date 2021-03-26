#include<stdio.h>
int main()
{
	int a,i;
	printf("Enter Number: ");
	scanf("%d",&a);
	for(i=a;i>=1;i--)
		printf("%d\t",i);
	printf("\n");
}