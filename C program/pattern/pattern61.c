#include<stdio.h>
int main()
{
	int i,j,x,a,b;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		a=65;
		b=97;
		for(j=1;j<=i*2;j++)
		{
			if(j%2==0)
			{
				printf("%c",b);
				b++;
			}
			else
			{
				printf("%c",a);
				a++;
			}
		}
		printf("\n");
	}
}