#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr,sum=0;
    printf("Enter Number of elements: ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("Error! Memory Not allocated\n");
        exit(0);
    }
    printf("Enter Elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("Sum=%d\n",sum);
    free(ptr);
}
