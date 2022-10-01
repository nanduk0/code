#include <stdio.h>
int A[100];

void Swap(int x, int y)
       {
         int temp;
         temp = A[x];
         A[x] = A[y];
         A[y] = temp;
       }

int partition(int l, int r)
       {
         int loc = l;
         while(l<r)
             {
                while(A[loc] <= A[r] && loc<r)
                   {
                      r--;
                   }
                if(A[loc]>A[r])
                   {
                      Swap(loc,r);
                      loc = r;
                      l = l+1;
                   }
                while(A[loc] >= A[l] && loc>l)
                   {
                      l++;
                   }
                if(A[loc]<A[l])
                   {
                      Swap(l,loc);
                      loc = l;
                      r = r-1;
                   }
             }
         return loc;
       }

void Quicksort(int l, int r)
       {
         int P;
         if(l<r)
             {
                P = partition(l,r);
                Quicksort(l, P-1);
                Quicksort(P+1, r);
             }
       }
int main()
       {
         int n,i;
         printf("Enter the size of Array: \n");
         scanf("%d",&n);
         printf("Enter the array elements: \n ");
         for(i=0;i<n;i++)
             scanf("%d", &A[i]);
         printf("Array before Sorting : \n");
         for(i=0;i<n;i++)
             printf("%d\n",A[i]);

         Quicksort(0,n-1);

         printf("Array after Sorting : \n");
         for(i=0;i<n;i++)
             printf("%d\n",A[i]);
         return 0;
       }

