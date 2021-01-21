#include<stdio.h>
int main()
{
    char name[50], blood[4],gender[12],dis[200];
    int age;
    printf("Enter Name: ");
    gets(name);
    printf("Enter Age: ");
    scanf("%d",&age);
    printf("Enter Blood group: ");
    fflush(stdin);
    gets(blood);
    printf("Enter Gender: ");
    gets(gender);
    printf("Enter Disease: ");
    gets(dis);
    printf("Name: %s\t\t Age: %d\nBlood Group: %s\nGender: %s\n\tDisease: %s",name,age,blood,gender,dis);
}
