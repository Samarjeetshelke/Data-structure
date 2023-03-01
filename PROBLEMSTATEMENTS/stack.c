#include<stdio.h>
#define MAX 5

int arr[5];
int top=-1;

void push(int data){
    if(top==MAX-1){
        printf("\nStack Overflow ......");
        return;
    }
    top++;
    arr[top]=data;
    printf("\n%d data is insterted!",data);
    return;
}

void pop(){
    if(top==-1){
        printf("\nStack Underflow......");
        return;
    }
    int data=arr[top];
    top--;
    printf("\n%d is poped!",data);
}

void main(){
    int opt;

while(1){


    printf("\n1.Push\n2.Pop\nEnter Your Choice?");
    scanf("%d",&opt);
    if(opt==1){
        int data;
        printf("\nEnter the data: ");
        scanf("%d",&data);
        push(data);
    }
    else if(opt==2){
        pop();
    }
    else{
        break;
    }

}
}