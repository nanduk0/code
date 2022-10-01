#include<stdio.h>
int main()
{
    int d;
    printf("enter a number");
    scanf("%d",&d);
    switch(d%7)
    {
        case 1:{
            printf("\nthe day is sunday");
            break;
        }
        case 2:{
            printf("\n the day is monday");
            break;
        }
        case 3:{
            printf("\n the day is tuesday");
            break;
        }
        case 4 :{
            printf("\n the day is wednesday");
            break;
        }
        case 5:{
            printf("\n the day is thursday");
            break;
        }
        case 6:{
            printf("\n te day is friday");
            break;
        }
        case 7:{
            printf("\n the day is saturday");
            break;
        }
        default:{
            printf("\n a week has only seven days");
        }
    }
    return 0;
}

        