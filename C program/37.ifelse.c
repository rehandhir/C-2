#include<stdio.h>
main()
{
    char ans;
    printf("Can you Give me pen press Y for yes and N for No: ");
    scanf("%c",&ans);
    if(ans=='y'||ans=='Y')
        printf("Thanks\n");
    if(ans=='n'||ans=='N')
        printf("It's ok\n");
}
