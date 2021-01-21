#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];
    int n,i,len,p;
    printf("Enter The string: ");
    scanf("%s",str1);
    printf("How many times you want to rotate the sting: ");
    scanf("%d",&n);
    len=strlen(str1);
    for(i=0;i<len;i++)
    {
        p=(i+n)%len;
        str2[p]=str1[i];
    }
    str2[len]='\0';
    printf("Rotated string is: %s\n",str2);
}
