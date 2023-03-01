#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node * head=NULL;
node * tail=NULL;

node * createnode(int datax){
    node * s=(node*)malloc(sizeof(node));
    s->data=datax;
    s->next=NULL;
}

void insertatstart(int datax){
    node *s;
    s=createnode(datax);

    if(head==NULL){
        head=tail=s;
        printf("\n%d is inserted!",datax);
        return;
    }
    
    s->next=head;
    head=s;
    printf("\n%d is inserted!",datax);
}

void insertatend(int datax){
    node *s;
    s=createnode(datax);
    if(tail==NULL){
        head=tail=s;
        printf("\n%d is inserted at end!",datax);
        return;
    }
    tail->next=s;
    tail=s;
    printf("\n%d is inserted at end!",datax);
}

void display(){
    node *s=head;
    if(s==NULL){
        printf("\nThe list is empty!");
        return;
    }
    printf("\nPrinitng data from linked list: ");
    while(s!=NULL){
        printf("\n%d",s->data);
        s=s->next;
    }
}

void insertatpos(int datax,int pos){
    int i=1;
    node * pre,*crt;

    crt=head;

    node * s=createnode(datax);

    if(head==NULL&&pos!=1){
        printf("The list is empty!we can,t insert..");
        return;
    }
    else if(head==NULL){
        head=s;
        printf("\n%d is inserted at %d position!",datax,pos);
        return;
    }

    while (i<pos)
    {
        pre=crt;
        crt=crt->next;
        i++;
        if(crt==NULL){
            break;
        }
    }
    
    if(i==pos){
        pre->next=s;
        s->next=crt;
        printf("\n%d is inserted at %d position!",datax,pos);
        return;
    }
    else{
        printf("\n%d is can not be inserted at %d position!",datax,pos);
    }

}

void main(){
    int opt;
    int datax;

    while(1){
        printf("\n\n1.Insert At Start\n2.Insert At End\n3.Display\n4.Insert at Given Position\nChoose the option:");
        scanf("%d",&opt);

        if(opt==1){
            printf("\nEnter a data: ");
            scanf("%d",&datax);
            insertatstart(datax);
        }
        else if(opt==2){
            printf("\nEnter a data: ");
            scanf("%d",&datax);
            insertatend(datax);
        }
        else if(opt==3){
            display();
        }
        else if(opt==4){
            int pos;
            printf("\nEnter a data: ");
            scanf("%d",&datax);
            printf("\nEnter the position: ");
            scanf("%d",&pos);
            insertatpos(datax,pos);
        }
        else{
            break;
        }
    }
}