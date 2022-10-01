#include<stdio.h>
int main()
{
    int a,b;
    printf("\n enter the numbers");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("\n %d is the largest number",a);
    }
    else{
        printf("\n %d is the largest",b);
    }
}