#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node * next;
}node;

node *head=NULL;
node *tail=NULL;

node * createnode(int datax){
    node * s=(node*)malloc(sizeof(node));
    s->data=datax;
    s->next=NULL;
    return s;
}

void insertatstart(int datax){
    node *s=createnode(datax);

    if(head==NULL){
        head=tail=s;
        tail->next=head;
        printf("\n%d is added!",head->data);
        return;
    }

    s->next=head;
    head=s;
    printf("\n%d is inserted!",datax);
}

void insertatend(int datax){
    node *s=createnode(datax);
    
    if(head==NULL){
        head=tail=s;
        tail->next=head;
        printf("\n%d is added!",head->data);
        return;
    }

    tail->next=s;
    tail=s;
    tail->next=head;
    printf("\n%d is added!",datax);

}

void deleteatstart(){
    if(head==NULL){
        printf("\nThe list is empty!");
        return;
    }
    printf("\n%d is removed!",head->data);
    if(head==tail){
        head=tail=NULL;
        return;
    }
    head=head->next;
    tail->next=head;
}

void deleteatend(){
     if(head==NULL){
        printf("\nThe list is empty!");
        return;
    }
    node * s=head;
    while(s->next!=tail){
        s=s->next;
    }
    printf("\n%d is removed!",tail->data);
    s->next=head;
    tail=s;    
}

void firstandlastelement(){
    if(head==NULL){
        printf("No First and last element are present.");
        return;
    }
    printf("%d id first element and %d is last element.",head->data,tail->data);
}

void display(){
    int count=1;
    node * s=head;

    if(head==NULL){
         printf("\nThe list is empty!");
         return;
    }

    printf("\nThe list Data is: ");
    
    while(s!=tail){
        printf("\n%d",s->data);
        count++;
        s=s->next;
    }
    printf("\n%d\n%d number are present in list.",s->data,count);
}

void insertatpos(int datax,int pos){
    int i=1;
    node * s=head;

    node * a=createnode(datax);
    node *pre =head;
    if(head==NULL&&pos==0){
        head=tail=a;
        printf("\nThe %d is inserted!",datax);
        return;
    }
    if(head==NULL){
        printf("\nThe Queue is emtpy!");
        return;
    }

    while (i<pos)
    {
        pre=s;
        s=s->next;
        i++;
        if(s==NULL){
            break;
        }
        
    }
    if(i==pos){
        a->next=pre->next;
        pre->next=a;
        printf("%d is inserted.",datax);
    }
    else{
        printf("%d is not  inserted.",datax);
    }
}

void main(){
    int opt;
    int datax;

    while (1)
    {
        printf("\n\n1.Insert At start\n2.Insert At end\n3.Delete At start\n4.Delete at end\n5.Display\n6.insert at pos\nEnter Your choice:");
        scanf("%d",&opt);

        if(opt==1){
            printf("\nEnter the data: ");
            scanf("%d",&datax);
            insertatstart(datax);
        }
        else if(opt==2){
            printf("\nEnter the data: ");
            scanf("%d",&datax);
            insertatend(datax);
        }
        else if(opt==3){
            deleteatstart();
        }
         else if(opt==4){
            deleteatend();
         }
         else if(opt==5){
            display();
            firstandlastelement();
        }
        else if(opt==6){
            int pos;
             printf("\nEnter the data: ");
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