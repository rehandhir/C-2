#include<stdio.h>
struct mst{

    char name[20];
    char department[20];
    float marks[4];
};
void passfail(float * arr , int size){
    for(int i=0 ; i<size ; i++){
         if(*(arr+i)<10){
            printf("you failed in subject number %d by %.2f marks",(i+1),(10 - arr[i]));
            printf("\n");
         }
    }
}
int main()
{

    //declarations and initializations;
     struct mst st ;
     int i=1;
    //main code;
       printf("Enter the name\n");
       scanf("%s",st.name);

       printf("Enter department name\n");
       scanf("%s",st.department);

        printf("Enter your one by one of 4 subjects\n");
        for(int j=0;j<4;j++){
            printf("enter marks in %d subject\n",j+1);
            scanf(" %f",&st.marks[j]);

             while(st.marks[j]>24){
                 printf("Wrong input ! .Enter your marks again\n");
                 scanf("%f",&st.marks[j]);
              }
        }
//pass or fail checker;
passfail(st.marks , 4);
}
