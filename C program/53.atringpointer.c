#include<stdio.h>
#include<string.h>
char* rev(char*);
int lenght(char*);
int main()
{
    char s;
   printf("%d",lenght("Computer"));
   printf("\n");
  s = rev("computer");
   printf("%s",s);
}
int lenght(char *p)
{
    int l;
    for(l=0;*(p+l)!='\0';l++);
    return(l);
}
char* rev(char *p)
{
    int l,i;
    char t;
    for(l=0;*(p+l)!='\0';l++);
    for(i=0;i<l/2;i++)
    {
        t=*(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=t;
    }
    return(p);
}
