#include<stdio.h>
#include<string.h>
#define size 30
struct mst{
    char name[20];
    char department[20];
    float marks[4];
};

struct subject
{
    char subject[size];
};
void passfail(float * arr )
{
        int c=0;
        int i=0 ;
        while(i<4) {
         if(*(arr+i)<10){
            printf("you failed in subject number %d by %.2f marks",(i+1),(10 - arr[i]));
            printf("\n");
            i++;
         }
    }
}
int main()
{

      //declarations and initialisations;
    struct mst st ;    //declared a structure mst;
    struct subject sub[5];  //declared array of structures;


//storing subject names in struct subject;

    strcpy(sub[0].subject , "MathsII");
    strcpy(sub[1].subject , "Chemistry");
    strcpy(sub[2].subject , "English");
    strcpy(sub[3].subject , "PPS");

//main code;
       printf("Enter the name\n");
       scanf("%s",st.name);

       printf("Enter department name\n");
       scanf("%s",st.department);

        for(int j=0;j<4;j++){

        printf("enter marks in %s : ",sub[j].subject);
        scanf(" %f",&st.marks[j]);

        while(st.marks[j]>24){
            printf("Wrong input ! .Enter your marks again\n");
            scanf("%f",&st.marks[j]);
              }
        }
//pass or fail checker;
passfail(st.marks);
}
