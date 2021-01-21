#include<stdio.h>
int main()
{
    switch(cas())
    {
    case 1:
        al();
        break;
    case 2:
        apl();
        break;
    case 3:
        exit(0);
    default :
        printf("Invalid Choice ");
    }
}
int cas()
{
    int ch;
    printf("\n1.a");
    printf("\n2.b");
    printf("\n3.Exit");
    printf("\nEnter Your Choice: ");
    scanf("%d",&ch);
    return(ch);
}
int ca()
{
    int ch;
    printf("\n1.a");
    printf("\n2.b");
    printf("\nEnter Your Choice: ");
    scanf("%d",&ch);
    return(ch);
}
void al()
{
    switch(ca())
    {
      case 1:
    printf("a");
    break;
case 2:
    printf("b");
    break;
default :
    printf("Invalid Choice");
    }

}
void apl()
{
      switch(ca())
      {
        case 1:
    printf("A");
    break;
case 2:
    printf("B");
    break;
default :
    printf("Invalid Choice");
      }

}
