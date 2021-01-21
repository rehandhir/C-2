#include <stdio.h>
int main()
{
	int i,j,l=1,k;
	for(i=1;i<=4;i++)
	{

		for(j=1;j<i*2;j++)
		{
			if(j<=i)
			{
				printf("%d",l);
				l++;

			}
			else
				printf(" ");
		}
		printf("\n");
	}
}