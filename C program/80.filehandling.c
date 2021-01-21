#include<stdio.h>
 struct emp
{
    char name[20];
    int age;
};
int main()
{
    struct emp e;
    FILE *p,*q;
    p=fopen("80.emp.txt","a");
    q=fopen("80.emp.txt","r");
    printf("Enter name and age: ");
    scanf("%[^\n] %d",e.name,&e.age);
    fprintf(p,"%s\n%d",e.name,e.age);
    fclose(p);
    do
    {
        fscanf(q,"%[^\n]\n%d",e.name,&e.age);
        printf("%s\t%d\n",e.name,e.age);
    }while(!feof(q));
}
