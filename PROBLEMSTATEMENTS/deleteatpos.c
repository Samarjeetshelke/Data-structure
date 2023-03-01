#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node * next;
}node;

int count=0;
node * head=NULL;

void insert(int datax){
    node * s;
    s=(node*)malloc(sizeof(node));
    s->data=datax;
    s->next=NULL;

    if(head==NULL){
        head=s;
        count++;
        printf("%d is inserted!",datax);
        return;
    }
    s->next=head;
    head=s;
    count++;
    printf("%d is inserted!",datax);
}

void display(){
    node * s=head;
    if(s==NULL){
        printf("\nThe list is empty...");
        return;
    }
     printf("\nThe list data i: ");

     while (s!=NULL)
     {
         printf("\n%d",s->data);
         s=s->next;
     }
     
}

void deleteposx(int pos){
    int i=0;
    node * s=head;
    node * a;
    if(head==NULL){
        printf("\nThe list is empty!");
        return;
    }
    if(pos>count){
        printf("\nThe element is not present in that position");
        return;
    }
    if(pos==0){
        printf("\n%d is deleted!",head->data);
        head=head->next;
        count--;
        return;
    }
    while(i!=pos-1){
        s=s->next;
        i++;
    }
    printf("\n%d is removed!",(s->next)->data);
    s->next=s->next->next;
    count--;
}

void deleteatpos(int pos){
    int i=0;
    node * crt,*pre;
    crt=head;
    if(head==NULL){
        printf("\nThe list is empty!");
        return;
    }
    if(head->next==NULL&&pos==1){
        printf("\n%d is removed!",head->data);
        head=NULL;
        return;
    }

    while (i<pos){
        pre=crt;
        crt=crt->next;
        i++;
        if(crt==NULL){
            break;
        }
    }

    if(i==pos){
        pre->next=crt->next;
        printf("\n%d is removed!",crt->data);
        return;
    }
    else{
        printf("\nThe Element at %d position is not deleted!",pos);

    }
    
}

void main(){
    int pos;
    int data,opt;

    while(1){
        printf("\n1.Insert\n2.Display\n3.delete\nEnter Your choice?");
        scanf("%d",&opt);
        if(opt==1){
            printf("\nEnter the data: ");
            scanf("%d",&data);
            insert(data);
        }
        else if(opt==2){
            display();

        }
        else{
            printf("\nEnter the position: ");
            scanf("%d",&pos);
            //deleteatpos(pos);
            deleteposx(pos);
        }
    }
}