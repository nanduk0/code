#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    printf("enter the limit\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements\n");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j;
    int temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j=i-1;j++)
        {  
            if(a[j]>a[j+1])
            {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
            }
        }
    }
    printf("sorted array...\n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
    printf("enter the search element");
    int se;
    scanf("%d",&se);
    int mid,beg,end;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(se==a[mid])
        {
            printf("elements is present in the array");
            exit(0);
        }
        if(beg<a[mid])
        {
            end=mid-1;

         
        }
        else{
            beg=mid+1;
        }
    }
    printf("elemen");
}