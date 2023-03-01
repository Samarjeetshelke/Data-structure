#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node * next;
}node;

node *head=NULL;

void insert(int datax){
    node * s=(node*)malloc(sizeof(node));
    s->data=datax;
    s->next=NULL;

    if(head==NULL){
        head=s;
        printf("\n%d is inserted!",datax);
        return;
    }
    s->next=head;
    head=s;
    printf("\n%d is inserted!",datax);
}

void disply(){
    int count=0;
    node * s=head;
    if(head==NULL){
        printf("\nList is empty...");
        return;
    }

     printf("\nThe data from list: ");

    while(s!=NULL){
        count++;
        printf("\n%d",s->data);
        s=s->next;
    }

     printf("\n%d is total number of element in linked list: ",count);
}
void deleteatstart(){
  
    if(head==NULL){
        printf("\nThe list is empty!");
        return;
    }
    printf("\n%d is removed!",head->data);
    head=head->next;
}

void deleteatend(){
    node * s=head;
    node * pre;
    if(head==NULL){
        printf("\nThe list is empty!");
        return;
    }

    while(s->next!=NULL){
        pre=s;
        s=s->next;
    }
    if(s==head){
        printf("\n%d is deleted from the list!",s->data);
        head=NULL;
    }
    else{
        printf("\n%d is deleted from the list!",s->data);
        pre->next=NULL;
    }

}

void main(){
    int opt;
    int pos,data;

    while(1){
        printf("\n1.Insert\n2.Display\n3.Delete At Start\n4.Delete At End\nEnter Your Choice?");
        scanf("%d",&opt);
        if(opt==1){
            printf("\nEnter The data: ");
            scanf("%d",&data);
            insert(data);
        }
        else if(opt==2){
            disply();
        }
        else if(opt==3){
            deleteatstart();
        }
        else if(opt==4){
            deleteatend();
        }
        else{
            break;
        }
    }
}