#include <stdio.h>
int main()
{
	int i,j,n=10,a[10]={};
	int temp,flag;
	printf("Enter 10 elements of array: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
		if(flag!=1)
			break;
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}