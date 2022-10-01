#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,d1,d2;
    printf(" enter the coeffient");
    scanf("%f%f%f",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    d1=(-b-d)/(2*a);
    d2=(-b+d)/(2*a);
    if(d>0)
    {
          printf("\n the square root of the expression =%f and %f",d1,d2);
    }
    else{
        printf("\n invalid");
    }


}