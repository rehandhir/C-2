#include<stdio.h>
main()
{
    int choice,a,b,c;
    while(1)
    {
        printf("\n\n1.Addition");
        printf("\n2.Odd Even");
       printf("\n3.Printing N number");
       printf("\n4.Exit");
       printf("\n\nEnter your choice:");
       scanf("%d",&choice);
       switch(choice)
       {
case 1:
       printf("Enter two numbers:");
       scanf("%d%d",&a,&b);
       c=a+b;
       printf("sum is:%d",c);
       break;
case 2:
      printf("Enter a number:");
      scanf("%d",&a);
      if(a%2==0)
        printf("Number is Even");
      else
        printf("number is even");
      break;
case 3:
      printf("Enter a number:");
      scanf("%d",&a);
      for(b=1;b<=a;b++)
            printf("%d\n",b);
      break;
case 4:
      exit(0);
default:
      printf("Invalid selection");
      }
    }
}
