#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int push();
int pop();
int top=-1,m,n,a[10],item;
int main(){
    int i,ch,cho;
    printf("enter the limit\n");
    scanf("%d",&n);
    while (ch != 1)
    {
        printf("1.push\n");
        printf("2.pop\n");
        printf("\nenter your choice");
        scanf("%d",&cho);
        switch (ch){
            case 1:{
                push();
                break;
            }
            case 2:{
                pop();
                break;
            }default:
            {
                printf("\ninvalid choice");
                exit(0);
            }
        }
    }
}
int push(){
    if(top==n)
    {
        printf("overflow");
    }
    else
    {
        top=top+1;
        a[top]=item;
    }

    
}
int pop(){
    if (top==-1)
    {
        printf("underflow");

    }
    else
    {
       
       item=a[top]; 
       top--;

    }
}