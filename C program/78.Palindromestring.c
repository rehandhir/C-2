#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int len;
    int start=0,end;
    printf("Enter The string: ");
    scanf("%s",str);
    len=strlen(str);
    end=len-1;
    int result=0;
    while(start<=end)
    {
        if(str[start]!=str[end])
        {
            result=1;
            break;
        }
        start++;
        end--;
    }
    (result==0)?printf("Given string is palindrome\n"):printf("Given string is not palindrome\n");
}
