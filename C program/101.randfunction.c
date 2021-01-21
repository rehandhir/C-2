#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int z ;
    char s,c;
    do
            {
                srand(time(NULL));
                 z = rand()%10;
            } while (z==0);
    s = (char)z;
    // scanf("%c",&c);
    // printf("c = %c\n",c);
    printf("z = %d\n",z);
    printf("s = %d\n",s);
}