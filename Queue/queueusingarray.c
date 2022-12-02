#include<stdio.h>
#include<conio.h>

#define MAX 10

struct queue{
    int front,rare;
    int data[10];
}fque;

void enqueue(int datax){

    if(fque.rare==MAX-1){
        printf("The QueueOverflow !");//it will check that queue is FullorNot
    }
    else{
        if(fque.rare==fque.front==-1){
            fque.rare=fque.front=0;//if the first element is entering
        }
        else{
            fque.rare+=1;
        }
        fque.data[fque.rare]=datax;

        printf("The data is inserted..!");
    }
}

void dequeue(){
    int datax;

    if(fque.front==-1||fque.front>fque.rare){
        printf("The Queue is EMpty..!");
        return;
    }
    else{
        datax=fque.data[fque.front];
        if(fque.front==fque.rare){
            fque.front=fque.rare=-1;
        }
        else
        {
            fque.front+=1;
        }

        printf("The is Deleted..!");
        
    }
}

void display(){

    if(fque.front==-1||fque.front>fque.rare){
        printf("The Queue is empty..!");
        return;
    }
    printf("\nThe Data In Queue...");

    int i = fque.front;
    for(;i<=fque.rare;i++){
        printf("\n%d",fque.data[i]);
    }
}

void main(){

    int d;

    printf("\nEnter A data:");
    scanf("%d",&d);
    enqueue(d);
    printf("\nEnter A data:");
    scanf("%d",&d);
    enqueue(d);
    printf("\nEnter A data:");
    scanf("%d",&d);
    enqueue(d);
    printf("\nEnter A data:");
    scanf("%d",&d);
    enqueue(d);
    dequeue();
    display();
}
