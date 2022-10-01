#include<stdio.h>
void main()
{
    int a,b,c,d,e,s;
    float p;
    printf("\n enter the marks of each subjects");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    s=a+b+c+d+e;
    p=(s/5);
    printf("\n total marks of the student=%d",s);
    printf("\n the total percentage of student=%f",p);

}