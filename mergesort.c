#include <stdio.h>
void mergesort(int A[],int l,int r);
void merge(int A[],int i1,int j1,int i2,int j2);
 
int main()
{
int A[50],n,i;
printf("Enter no of elements:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&A[i]);
mergesort(A,0,n-1);
printf("\nSorted array is :\n");
for(i=0;i<n;i++)
printf("%d\n",A[i]);
return 0;
}
 
void mergesort(int A[],int l,int r)
{
int mid;
if(l<r)
{
mid=(l+r)/2;
mergesort(A,l,mid); 
mergesort(A,mid+1,r);
merge(A,l,mid,mid+1,r); 
}
}
 
void merge(int A[],int i1,int j1,int i2,int j2)
{
int C[50]; 
int i,j,k;
i=i1; 
j=i2;
k=0;
while(i<=j1 && j<=j2)
{
if(A[i]<A[j])
C[k++]=A[i++];
else
C[k++]=A[j++];
}
while(i<=j1)
C[k++]=A[i++];
while(j<=j2)
C[k++]=A[j++];

for(i=i1,j=0;i<=j2;i++,j++)
A[i]=C[j];
}