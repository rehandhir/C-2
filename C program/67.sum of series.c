#include<stdio.h>
#include<stdlib.h>
int serieslist();
void series1();
void series2();
void series3();
void series4();
int main()
{
    while(1)
    {
    switch(serieslist())
        {
        case 1:
            series1();
            break;
        case 2:
            series2();
            break;
        case 3:
            series3();
            break;
        case 4:
            series4();
            break;
        case 5:
            exit(0);
        default:
            printf("\n Invalid choice\n");
        }
    }
}
int serieslist()
{
    int ch;
    printf("1.Series MSE-1\n");
    printf("2.Series MSE-2\n");
    printf("3.Series MSE-3\n");
    printf("4.Series MSE-4\n");
    printf("5.Exit\n");
    printf("Enter Your Choice: ");
    scanf("%d",&ch);
    return(ch);
}
void series1()
{
    int x,s,n,i,j,k;
    float f,p,d,sum=0;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=2*i-1;
        f=1;
        for(j=1;j<=s;j++)
            f=f*j;
        p=1;
        for(k=1;k<=s;k++)
            p=p*x;
        d=p/f;
        if(i%2==0)
            sum=sum-d;
        else
            sum=sum+d;
        printf("s=%d\t\tp=%.2f\t\tf=%.2f\t\td=%.2f\t\tsum=%.2f\n",s,p,f,d,sum);
    }
    printf("nth of series: %d \nSum of series: %.2f",s,sum);
}
void series2()
{
    int i,j,k,x,n,s;
    float p,f,d,sum=0;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=2*i-2;
        p=1;
        for(j=1;j<=s;j++)
            p=p*x;
        f=1;
        for(k=1;k<=s;k++)
            f=f*k;
        d=p/f;
         if(i%2==0)
            sum=sum-d;
        else
            sum=sum+d;
        printf("s=%d\tp=%.2f\tf=%.2f\td=%.2f\tsum=%.2f\n",s,p,f,d,sum);
    }
   printf("nth of series: %d \nSum of series: %.2f",s,sum);
}
void series3()
{
    int x,s,n,i,j,k;
    float f,p,d,sum=0;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=2*i-1;
        f=1;
        for(j=1;j<=s;j++)
            f=f*j;
        p=1;
        for(k=1;k<=s;k++)
            p=p*x;
        d=p/f;
        if(i%6==0)
            sum=sum-d;
        else
            sum=sum+d;
            printf("s=%d\t\tp=%.2f\t\tf=%.2f\t\td=%.2f\t\tsum=%.2f\n",s,p,f,d,sum);
    }
    printf("nth of series: %d \nSum of series: %.2f",s,sum);
}
void series4()
{
    int i,j,k,x,n,s;
    float p,f,d,sum=0;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=2*i-2;
        p=1;
        for(j=1;j<=s;j++)
            p=p*x;
        f=1;
        for(k=1;k<=s;k++)
            f=f*k;
        d=p/f;
         if(i%5==0)
            sum=sum-d;
        else
            sum=sum+d;
        printf("s=%d\tp=%.2f\tf=%.2f\td=%.2f\tsum=%.2f\n",s,p,f,d,sum);
    }
   printf("nth of series: %d \nSum of series: %.2f",s,sum);
}
