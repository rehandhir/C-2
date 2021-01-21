#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i;
    FILE *fp;
    char s[1000];
    fp=fopen("63.file.txt","w");
    if(fp==NULL)
    {
        printf("File Not Found");
        exit(1);
    }
    printf("Enter string: ");
    scanf("%[^\n]",s);
    for(i=0;i<strlen(s);i++)
        fputc(s[i],fp);
    fclose(fp);
}
