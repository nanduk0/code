#include<stdio.h>
int main()
{
    int a;
    printf(" enter a number ");
    scanf("%d",&a);
    if(a==1)
    {
        printf("\n the day is sunday");
    }
    else if(a==2)
    {
        printf("\n the day is monday");
    }
    else if(a==3)
    {
        printf("\n the day is tuesday");
    }
    else if(a==4)
    {
        printf("\n the day is wednesday");
    }
    else if(a==5)
    {
        printf("\n the day is thursday");    
    }
    else if(a==6)
    {
        printf("\n the day is friday");
    }
    else if(a==7)
    {
        printf("\n the day is saturday");
    }
    else{
        printf("\n a week has only seven days");
    }
    return 0;
}