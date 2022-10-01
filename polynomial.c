#include<stdio.h>
void main()
{
    int n,m,k,i,c1[100],c2[100],c3[100];
    printf("enter the degree of first polynomial");
    scanf("%d",&n);
    printf("enter the coefficients:\n");
    for(i=0;i<=n;i++)
    {
        printf("\t");
        scanf("%d",&c1[i]);
    }
    for(i=0;i<=n;i++)
    {
        if(i<n)
        printf("%dx^%d",c1[i],i);
        else
        printf("%dx^%d",c1[i],i);
    }
    printf("\n enter the degree of secod polynomial");
    scanf("%d",&m);
    printf("\n enter the coefficients:");
    for(i=0;i<=m;i++)
    {
        printf("\t");
        scanf("%d",&c2[i]);
    }
    for ( i = 0; i <= m; i++)
    {
        if(i<m)
        printf("%dx^%d",c2[i],i);
        else
        printf("%dx^%d",c2[1],i);
    }
    printf("\n adding two polynomials........");
    if(m<n)
    {
        k=n;
        for(i=0;i<=n;i++)
        c3[i]=c1[i];
        for(i=0;i<=k;i++)
        c3[i]+=c2[i];
    }
    else
    {
        k=m;
        for ( i = 0; i <= m; i++)
        c3[i]=c2[i];
        for ( i = 0; i <= k; i++)
        c3[i]+=c1[i];
    }  
    printf("\n the new polynomial:");
    for ( i = 0; i <= k; i++)
    {
        if(i<k)
        printf("%dx^%d +",c3[i],i);
        else
        printf("%dx^%d",c3[i],i);
    }
        
        
    }
