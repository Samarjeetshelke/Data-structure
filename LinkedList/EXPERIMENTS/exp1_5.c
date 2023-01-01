#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

int find_min(struct node * s){
    int min=s->data;

    while(s!=NULL){
        if(min > s->data){
            min=s->data;
        }
        s=s->next;
    }
    return min;
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
    s->data=10;
//linking
    a->next=b;
    b->next=c;
    c->next=s;
    s->next=NULL;

    head=a;

    printf("\nThe Minimum Element from the list is :%d",find_min(head));
    
}