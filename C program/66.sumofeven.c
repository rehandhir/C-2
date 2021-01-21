#include<stdio.h>
int main()
{
	int i,j,sum=0;
	for (i=1;i<=10;i++)
		for (j=i;j<=100;j+=10)
            if(j%2==0)
                sum=sum+j;
	printf("\nSum of even numbers between range 1 to 100: %d\n",sum);
}
