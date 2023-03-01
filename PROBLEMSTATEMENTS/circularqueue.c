#include<stdio.h>

#define SIZE 5

int arr[5];
int fr=-1,rr=-1;

void enqueue(int data){
    if((rr+1)%SIZE==fr){
        printf("\nThe Queue is full....");
        return;
    }
    if(fr==-1){
        fr=0;//set to 0
    }
    rr=(rr+1)%SIZE;//increament using mod
    arr[rr]=data;
    printf("\n%d is inserted!",data);
}

void dequeue(){
    if(fr==-1){
        printf("\nThe Queue is Empty....");
        return;
    }
    if(fr==rr){
       
        printf("%d is removed!",arr[fr]);
         fr=rr=-1;
        return;
    }

    int data=arr[fr];
    fr=(fr+1)%SIZE;//in queue the front and rare are both get incremted //using %
    printf("%d is removed!",data);

}

void traverse(){
    int i=fr;

    if(fr==-1){
        printf("\nThe Queue is empty....");
        return;
    }

    printf("\nDisplaying the data form queue: ");

    while(i<rr){
        printf("\n%d",arr[i]);
        i=(i+1)%SIZE;
    }
    printf("\n%d",arr[i]);
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