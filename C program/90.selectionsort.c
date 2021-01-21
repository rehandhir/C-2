#include<stdio.h>
int main()
{
	int i,j,n=10,a[10]={};
	int temp,min;
	printf("Enter 10 elements of array: ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
			  min=j;
			}		
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}		
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}