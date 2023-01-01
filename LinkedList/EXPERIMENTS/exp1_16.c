#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int frequency_of_element(struct node *a,int n){
    int fre=0;
    while(a!=NULL){
        if(n==a->data){
            fre++;
        }
        a=a->next;
    }
    return fre;
}

void presentofnot(struct node*s,int n){
    struct node * pre,*a;
    while(s!=NULL){
        if(s->data==n){
            printf("\nThe Element is Already Present in list.");
            return;
        }
        pre=s;
        s=s->next;
    }
    a=(struct node*)malloc(sizeof(struct node));
    a->data=n;
    a->next=NULL;
    pre->next=a;
    printf("\nThe Element was Not present so it is insertd at end!");
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
    printf("\nEnter the Number: ");
    scanf("%d",&d);
    printf("\nThe Frequency of %d is %d",d,frequency_of_element(head,d));
    printf("\nEnter the Number: ");
    scanf("%d",&d);
    presentofnot(head,d);
}