#include<stdio.h>
int main()
{
	int a,i,j,k=1;
	printf("Enter Number: ");
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	{
		k=(a+1)-i;
		for (j=i*2-1;j>=1;j--)
		{
			printf("%d ",k);
			(j>i)?k++:k--;
		}
		printf("\n");
	}

	printf("\n");
}