#include<stdio.h>
int main()
{
	int a[5]={4,5,76,6,54};
	int i,n,x=5;
	printf("Enter index: ");
	scanf("%d",&n);
	for(i=0;i<x;i++)
		printf("%d\t",a[i]);
	printf("\nAfter delete elemetns\n");
	for(i=n;i<x;i++)
		a[i]=a[i+1];
	for(i=0;i<x-1;i++)
		printf("%d\t",a[i]);
	a[i]=NULL;
	
	printf("\n%d\n",a[i]);
}
