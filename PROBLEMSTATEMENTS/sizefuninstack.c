#include<stdio.h>
#define MAX 10

int arr[10];
int top=-1;

void push(int data){
    if(top==MAX-1){
        printf("\nOverFlow....");
        return;
    }
    top++;
    arr[top]=data;
    printf("\n%d is added",data);

}

 void pop(){
    if(top==-1){
        printf("\nUnderflow....");
        return;
    }
    int n=arr[top];
    top--;
    printf("\n%d is poped!,n");
 }

 int size(){
    return top+1;
 }

 void main(){
    int data,opt;

    while(1){
        printf("\n1.Push\n2.Pop\n3.size\nEnter Your Choice?");
        scanf("%d",&opt);
        if(opt==1){
            printf("\nEnter the data: ");
            scanf("%d",&data);
            push(data);
        }
        else if(opt==2){
            pop();
        }
        else if(opt==3){
            printf("\nThe current Number of elements on stack is %d",size());
        }
        else{
            break;
        }
    }
 }