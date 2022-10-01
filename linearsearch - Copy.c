#include <stdio.h>
void main()
{
 
    int i, num, se, loc= 0;
 
    printf("Enter the limit");
    scanf("%d", &num);
    int array[num];
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
 
    printf("Enter the element to be searched ");
    scanf("%d", &se);
    for (i = 0; i < num ; i++)
    {
        if (se == array[i] )
        {
            loc = 1;
            break;
        }
    }
    if (loc== -1)
        printf("Element is not present in the array");
    else
        printf("Element is  present in the array at position %d\n",i+1);
}
