#include<stdio.h>
#define SIZE 5

int arr[5];
int fr=-1,rr=-1;

void enqueue(int data){
    if(rr==SIZE-1){
        printf("\nQueue if Full....");
        return;
    }
    if(fr==-1){
        fr++;
    }
    rr=rr+1;
    arr[rr]=data;
    printf("\n%d is inserted!",data);
}

void dequeue(){
    if(fr==-1||fr>rr){
        printf("\nQueue is empty....");
        return;
    }
    int data=arr[fr];
    fr++;
    printf("\n%d is removed!",data);
}

void traverse(){
    int i=fr;

    if(fr>rr||fr==-1){
        printf("\nQueue is empty!");
        return;
    }
    printf("\nPrinting data form Queue: ");

    while(i<=rr){
        printf("\n%d",arr[i]);
        i++;
    }
}

void main(){
    int opt;
    int data;

    while(1){
        printf("\n\n\n1.Enqueue\n2.Dequeue\n3.Traverse\nSelect OPtion: ");
        scanf("%d",&opt);

        if(opt==1){
            printf("\nEnter the data:");
            scanf("%d",&data);
            enqueue(data);
        }
        else if(opt==2){
            dequeue();
        }
        else if(opt==3){
            traverse();
        }
        else{
            break;
        }
    }
}
