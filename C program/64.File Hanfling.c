#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i;
    FILE *fp;
    char ch;
    fp=fopen("63.file.txt","r");
    if(fp==NULL)
    {
        printf("File Not Found");
        exit(1);
    }
   ch=fgetc(fp);
   printf("\n\n\n\n\n\t\t");
   while(!feof(fp))
   {
      printf("%c",ch);
      for(int i=0;i<=100000000;i++);
      ch=fgetc(fp);
   }
   printf("\n\n\n\n\n\t\t");
    fclose(fp);
}

