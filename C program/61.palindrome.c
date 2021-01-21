#include<stdio.h>
int main()
{
    int n,reversedN=0,remainder,originalN;
    printf("Enter an Number: ");
    scanf("%d",&n);
    originalN=n;
    while(n!=0)
    {
        remainder=n%10;
        reversedN=reversedN*10+remainder;
        n=n/10;
    }
    if(originalN==reversedN)
        printf("%d is palindrome",originalN);
    else
        printf("%d is not palindrome",originalN);
}
