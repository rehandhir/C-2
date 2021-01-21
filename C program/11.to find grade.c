#include<stdio.h>
main()
{
    float marks;
    while(1)
    {
    printf("Enter your marks:");
    scanf("%f",&marks);
    (marks>=90)?printf("Grade A\n"):(marks>=80)?printf("Grade B\n"):(marks>=70)?printf("Grade C\n"):(marks>=60)?printf("Grade D\n"):(marks>=50)?printf("Grade E\n"):printf("Grade F\n");
    }
}
