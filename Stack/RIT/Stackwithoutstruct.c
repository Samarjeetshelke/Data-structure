#include<stdio.h>
#include<conio.h>

int top =-1;

int empty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int full(){
    if(top==4){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int * stack,int data){
    top++;
    *(stack+top)=data;
}

int pop(int * stack){
    int x;
    x= *(stack+top);
    top--;
    return x;
}

void main(){
    int data[5];
    int x;

    while (full()!=1)
    {
        printf("\nEnter Number In Stack: ");
        scanf("%d",&x);
        push(data,x);
    }
    printf("\nStack is Full Now !");
    printf("\nNow Printing Data...");

    while(empty()!=1){
        printf("\n%d",pop(data));
    }
    
    printf("\nStack is Empty Now!");
}
