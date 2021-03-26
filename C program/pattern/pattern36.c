#include<stdio.h>
int main()
{
	int i,a,x;
	printf("Enter Number: ");
	scanf("%d",&a);
	x=a;
	for(i=1;i<=x*2-1;i++)
	{
		if(i%2==0)
		{
		printf("  @  ");
	    }
	    else
	    {
	    printf("  %d  ",x+1-a);
		i<x?a--:a++;
	    }

	}
}