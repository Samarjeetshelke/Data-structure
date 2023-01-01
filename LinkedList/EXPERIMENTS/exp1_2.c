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

//Function to retun the numberof nodes
int count_node( struct node * head){
    node * s=head;
    int cnt=0;

    while(s!=NULL){
        cnt++;
        s=s->next;
    }
    return cnt;
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

    printf("\nThe numbers of node in list : %d",count_node(head));
}