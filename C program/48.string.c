#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    printf("Enter Your Name: ");
    scanf("%[^\n]",a);
    strrev(a);
}
