#include<stdio.h>
#define MAX 20

int stack[20];
int top1=-1;
int top2=9;

void push1(int data){
    if(top1==9){
        printf("\nStack 1 OverFlow...");
        return;
    }
    top1++;
    stack[top1]=data;
    printf("\n%d is inserted!",data);
}

void push2(int data){
     if(top2==MAX-1){
        printf("\nStack 2 OverFlow...");
        return;
    }
    top2++;
    stack[top2]=data;
    printf("\n%d is inserted!",data);
}

void pop1(){
    int n;
    if(top1==-1){
        printf("\nStack 1 is Underflow...");
        return;
    }
    n=stack[top1];
    top1--;
    printf("%d is removed!",n);
}

void pop2(){
    int n;
    if(top2==9){
        printf("\nStack 1 is Underflow...");
        return;
    }
    n=stack[top2];
    top2--;
    printf("%d is removed!",n);
}


void main(){
    int opt;
    int data;

    while(1){
        printf("\n1.Push in stack 1\n2.Pop in stack 2\n3.Push in stack 2\n4.Pop in stack in 2\nEnter your choice?");
        scanf("%d",&opt);

        if(opt==1){
            printf("\nEnter the data: ");
            scanf("%d",&data);
            push1(data);
        }
        else if(opt==2){
            pop1();
        }
        else if (opt==3){
            printf("\nEnter the data: ");
            scanf("%d",&data);
            push2(data);
        }
        else if (opt==4)
        {
            pop2();
        }
        else{
            break;
        }
        
    }
}