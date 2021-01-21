#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(3*sizeof(int));
    for(int i= 0; i<3;i++)  
    {
        printf("Enter The values of no %d of the array \n ",i);
        scanf("%d",&ptr[i]);
    }
    for(int i= 0; i<3;i++)  
    {
        printf("Enter The values at %d of the array is %d\n ",i,ptr[i]);
    }
}