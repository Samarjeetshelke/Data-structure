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

//Function to search the given element

int search_node(struct node *s,int sv){
    while (s!=NULL)
    {
        if(s->data==sv){
            return 1;
        }
        s=s->next;
    }
    return 0;
    
}


void main(){
    struct node * head,*a,*b,*c,*s;
    int n;


//allocating space
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
    s=(struct node*)malloc(sizeof(struct node));

//inserting data
    a->data=1;
    b->data=2;
    c->data=3;
    s->data=0;

//linking
    a->next=b;
    b->next=c;
    c->next=s;
    s->next=NULL;

    head=a;

    printf("\nEnter The Element To Search :");
    scanf("%d",&n);
    if(search_node(head,n)){
        printf("\nElement Found>>");
    }
    else{
        printf("\nNot Found !");
    }
   
}