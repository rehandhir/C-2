#include <stdio.h>
int main()
{
	int i,a,x;
	printf("Enter Number: ");
	scanf("%d",&a);
	x=a;
	for(i=1;i<=(x*2+1);i++)
	{
		printf("%d ",a);
		i<x+1?a--:a++;
	}
}