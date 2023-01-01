#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int sum_of_nodedata(struct node * s){
    int sum=0;
    while(s!=NULL){
        sum=sum+s->data;
        s=s->next;
    }
    return sum;
}

void  square_of_nodedata(struct node*s){
    int n;
    while(s!=NULL){
        n=s->data;
        printf("\nThe Square of %d is %d",n,(n*n));
        s=s->next;
    }
}
void main(){
    int d;

    struct node * head,*a,*b,*c,*s;

//allocating space
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
    s=(struct node*)malloc(sizeof(struct node));
//inserting data
    a->data=1;
    b->data=2;
    c->data=3;
    s->data=1;

//linking
    a->next=b;
    b->next=c;
    c->next=s;
    s->next=NULL;

    head=a;

//displaying data
    printf("\nPrinting Data From list: ");
    s=head;
    while(s!=NULL){
        printf("\n%d",s->data);
        s=s->next;
    }

    printf("\nThe Sum of Element is:%d ",sum_of_nodedata(head));
    printf("\nThe Square of Elements: ");
    square_of_nodedata(head);
    
}