#include<stdio.h>
#define size 5

int arr[5];
int fr=-1,rr=-1;

void insert_form_rare(int data){
    if((rr+1)%size==fr)
    {
        printf("\nQueue is full.....");
        return;
    }
    if(rr==-1){
        fr=0;
    }
    rr=(rr+1)%size;
    arr[rr]=data;
    printf("\n%d is inserted from rare!",data);
}

void insert_from_front(int data){
    if((rr+1)%size==fr)
    {
        printf("\nQueue is full.....");
        return;
    }
    if(rr==-1){
        rr=0;
    }
    if(fr==0){
        fr=size-1;
        arr[fr]=data;
        printf("\n%d is inserted from rare!",data);
        return;
    }
    fr=fr-1;
    arr[fr]=data;
    printf("\n%d is inserted from Front!",data);
}

void delete_from_front(){
    if(fr==-1){
        printf("\nQueue is Empty....");
        return;
    }

    int data=arr[fr];

    if(fr==rr){
        printf("\n%d is removed from front....",data);
        fr=rr=-1;
        return;
    }
    fr=(fr+1)%size;
    printf("\n%d is removed from front....",data);
}

void delete_from_rare(){
    if(rr==-1){
        printf("\nQueue is Empty....");
        return;
    }

    int data=arr[rr];

    if(fr==rr){
        printf("\n%d is removed from front....",data);
        fr=rr=-1;
        return;
    }
    if(rr==0){
       printf("\n%d is removed from front....",data);
       rr=size-1;
       return; 
    }

    rr=rr-1;
    printf("\n%d is removed from rare....",data);
}

void traverse(){
    int i=fr;
    if(fr==-1){
        printf("\nQuque is Empty can't Traverse....");
        return;
    }

    printf("\nThe data From Queue: ");
    while(i<rr){
        printf("\t%d",arr[i]);
        i=(i+1)%size;
    }
    printf("\t%d",arr[i]);
}

void main(){
    int opt;
    int data;

    while(1){
        printf("\n\n\n1.Insert From Rare\n2.Delete from front\n3.Insert From Front\n4.Delete Form Rare\n5.Traverse\nEnter Your Choice?");
        scanf("%d",&opt);
        if(opt==1){
            printf("\nEnter The data: ");
            scanf("%d",&data);
            insert_form_rare(data);
        }
        else if(opt==2){
            delete_from_front();
        }
        else if(opt==3){
            printf("\nEnter The data: ");
            scanf("%d",&data);
             insert_from_front(data);
        }
        else if(opt==4){
            delete_from_rare();
        }
        else if(opt==5){
            traverse();
        }
        else{
            break;
        }
    }
}