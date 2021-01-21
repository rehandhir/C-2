#include <stdio.h>
int main()
{
	int i,j;
	printf("Enter Number up to you want play Fizz Buzz: ");
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
		if(i%15==0)
			printf("Fizz Buzz\n");
		else if(i%5==0)
			printf("Buzz\n");
		else if(i%3==0)
			printf("Fizz\n");
		else
			printf("%d\n",i);
	}
}
