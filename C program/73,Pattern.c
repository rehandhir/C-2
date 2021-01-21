#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter Number: ");
    scanf("%d",&n);
   	for(i=1;i<=n;i++)
		if(i%3==0)
		printf("@ ");
	else if(i%3==1)
		printf("* ");
	else
		printf("# ");
	printf("\n");
}