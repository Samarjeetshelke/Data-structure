#include<stdio.h>
#define size 5

int queue[5];
int fr=-1,rr=-1;

void insertatrr(int data){
    if((rr+1)%size==fr){
        printf("\nQueue is Full....");
        return;
    }
    if(fr==-1){
        fr=0;
    }
    rr=(rr+1)%size;
    queue[rr]=data;
    printf("\n%d is added!",data);

}

void insertatfr(int data){
    if((rr+1)%size==fr){
        printf("\nQueue is Full....");
        return;
    }
    if(fr==-1){
        rr=0;
        fr=0;
        queue[fr]=data;
        printf("%d is added!",data);
        return;
    }
    if(fr==0){
        fr=size-1;
        queue[fr]=data;
        printf("%d is added!",data);
        return;
    }
    fr--;
    queue[fr]=data;
    printf("%d is added!",data);
    return;
}

void deleteatfr(){
    if(fr==-1){
        printf("\nQueue is empty.....");
        return;
    }
    int data=queue[rr];
    if(fr==rr){
        fr=rr=-1;
    }
    else{
        fr=(fr=1)%size;
    }
    printf("\n%d is removed!",queue[fr]);
}

void deleteatrare(){
    if(rr==-1){
        printf("\nQueue is empty....");
        return;
    }
    int data =queue[fr];
    if(fr==rr){
        fr=rr=1;
    }
    else{
        if(fr==0){
            fr=size-1;
        }
        else{
            fr--;
        }
    }
    printf("\n%d is removed!",data);
}

void traverse(){
    int i=fr;

    while(i<rr){
        printf("\n%d",queue[i]);
        i=(i+1)%size;
    }
     printf("\n%d",queue[i]);
}

void main(){
    int opt,data;

    while(1){
        printf("\n1.Insert at rare\n2.INsert At Front\n3.Delete at front\n4.Delete at rare\n5.Traverse\nEnter Your choice:");
        scanf("%d",&opt);

        if(opt==1){
            printf("\nEnter the data: ");
            scanf("%d",&data);
            insertatrr(data);
        }
        else if(opt==2){
            printf("\nEnter the data: ");
            scanf("%d",&data);
            insertatfr(data);
        }
        else if(opt==3){
            deleteatfr();
        }
        else if(opt==4){
            deleteatrare();
        }
        else if(opt==5){
            traverse();
        }
        else{
            break;
        }
    }
}