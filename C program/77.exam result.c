#include<stdio.h>
#include<string.h>
void detail();
void marks();
char sub[4][10]={"MathsII","English","Chemistry","PPS"};
float mark[4];
int main()
{
    detail();
    marks();
}
void detail()
{
    char name[40],dept[50];
    printf("Enter Your Name: ");
    gets(name);
    printf("Enter Your Dept: ");
    gets(dept);
}
void marks()
{
    int i,j;
    printf("\nEnter your Marks of MST1 out of 24\n");
    for( i=0;i<=3;i++)
    {
        label:
        printf("Enter Your Marks in %s: ",sub[i]);
        scanf("%f",&mark[i]);
        if(mark[i]>24)
        {
        printf("\tWrong Input\n");
            goto label;
        }
    }
i=0;
    for(j=0;j<=3;j++)
    {
        if(mark[i]<10)
           printf("You failed in %s by %.1f\n",sub[i],(10-mark[i]));
        else
           printf("You passed in subject %s\n",sub[i]);
        i++;
    }
}
