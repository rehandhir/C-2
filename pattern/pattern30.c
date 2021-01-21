#include<stdio.h>
int main()
{
	int a,i,k,j,l;
	printf("Enter Number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		k=0;
		l=1;
		for (j=1;j<=(a*2)-1;j++)
		{
			if(j<=i*2-1)
			{
				printf("%d",l);
				(j<i)?l++:l--;

			}
			else
			{
				printf(" ");
			}
			k++;

		}
		printf("\n");
	}
	printf("\n");
}