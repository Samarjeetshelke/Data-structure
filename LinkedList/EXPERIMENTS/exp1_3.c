#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node * next;
}node;

node * head = NULL;

node * createNode(int d){
    node * s= (node *)malloc(sizeof(node));
    s->next = NULL;
    s->data = d;
    return s;
}

//Function to return the First and Last Node

int first_node(struct node * s){
    return s->data;
}

int last_node(struct node *s){
    while (s->next!=NULL)
    {
        s=s->next;
    }
    return s->data;
    
}
void main(){
    struct node * head,*a,*b,*c,*s;

//allocating space
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));

//inserting data
    a->data=1;
    b->data=2;
    c->data=3;

//linking
    a->next=b;
    b->next=c;
    c->next=NULL;

    head=a;

    printf("\nThe First Node of the list is %d",first_node(head));
    printf("\nThe Last Node of the list is %d",last_node(head));
   
}