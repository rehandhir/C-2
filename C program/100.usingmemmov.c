#include<stdio.h>
#include<string.h>
int main()
{
	int a[5]={5,4,9,7,3};
	int i,n=2,x=5;
	for(i=0;i<x;i++)
		printf("%d\t",a[i]);
	printf("\nafter delet elements\n");
	int s=sizeof(a[0]);
	printf("s=%d\n",s);
	memmove(a + n,  a + n + 1,   (x-n  - 1) * sizeof(a[0]));
	for(i=0;i<x;i++)
		printf("%d\t",a[i]);
		printf("\n");
}
