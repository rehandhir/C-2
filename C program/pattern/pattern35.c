#include<stdio.h>
int main()
{
	int i,a,x;
	printf("Enter Number: ");
	scanf("%d",&a);
	x=a;
	for(i=1;i<=x*2-1;i++)
	{
		printf("  %d  ",x+1-a);
		i<x?a--:a++;
	}
	printf("\n");
}