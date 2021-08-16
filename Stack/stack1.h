#include<stdio.h>
#include<conio.h>
#define m 5

typedef struct stack{
     int top;
     int data[m];
}stack;

void init(stack * t){
    t -> top = -1;
}

void push(stack * t,int d){
    if(t->top == m-1){
        printf("\nstack overflow !");
    }
    else{
        t->top++;
        t->data[t->top] = d;
        printf("\ndone !");
    }
}

void pop(stack * t){
    if(t->top == -1){
        printf("\nstack is empty !.stack underflow !");
    }
    else{
        printf("\njust %d is deleted",t->data[t->top]);
        t->top--;

    }
}

void disp(stack * t){
    int i =t->top;
    if(t->top == -1){
        printf("\nstack is empty!");
    }
    else{
        for(;i>-1;i--){
            printf("\n%d ",t->data[i]);
        }
    }
}