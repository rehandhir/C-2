#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i;
    FILE *fp;
    char str[10];
    fp=fopen("63.file.txt","r");
    if(fp==NULL)
    {
        printf("File Not Found");
        exit(1);
    }
   while(fgets(str,9,fp)!=NULL)
   {
      printf("%s",str);
   }
    fclose(fp);
}
