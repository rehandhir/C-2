#include<stdio.h>
int main()
{
    struct book
    {
        char name[40];
        float price;
        int pges;
    };
    struct book b1,b2,b3;
    printf("Enter name of Book: ");
    scanf("%[^\n]",&b1.name);
    printf("Enter Price of Book: ");
    scanf("%f",&b2.price);
    printf("How many pages in books: ");
    scanf("%d",&b3.pges);
    printf("Name of book :%s\n Price of book: %.2f\n No.of pages in Book: %d\n",b1.name,b2.price,b3.pges);
}
/*Enter name of Book: Let us C
Enter Price of Book: 249
How many pages in books: 464
Name of book :Let us C
 Price of book: 249.00
 No.of pages in Book: 464*/
