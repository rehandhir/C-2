#include<stdio.h>
main()
{
    float marks;

    while(1)
    {
    printf("Enter your marks:");
    scanf("%f",&marks);
    if(marks>=90)
        {
        printf("Grade A\n");
        }
    else
    {
        if(marks>=80)
        {
            printf("Grade B\n");
        }
        else
        {
            if(marks>=70)
            {
                 printf("Grade C\n");
            }
            else
            {
                if(marks>=60)
                {
                    printf("Grade D\n");
                }
                else
                {
                    if(marks>=50)
                    {
                        printf("Grade E\n");
                    }
                    else
                        printf("Grade F\n");
                }
            }
        }
    }
  }
}
