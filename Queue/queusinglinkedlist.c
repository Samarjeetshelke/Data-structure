#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node * next;
}node;

typedef struct que{
    node* fr;
    node * rr;
}que;

void init(que* t){
    t->fr = t->rr = NULL;
}

node * createnode(int d){
    node * c = (node *)malloc(sizeof(node));
    c -> data = d;
    c -> next = NULL;
    return c;
}

void insert (que * t, int d){
    node * a = createnode(d);
    node * b;
    if(t->fr == NULL){
        t->fr = t->rr = a;
    }
    else{
        b = t->rr;
        b->next = a;
        t->rr = a;
    }
}

void remove(que * t){
    node * a = t->fr;
    if(t->fr == NULL){
        printf("\nUnderflow !");
        getch();
        return;
    }
    if(t->rr == t->fr){
        t->fr =t->rr = NULL;
    }
    else{
        t->fr = a->next;
    }
    free(a);
}


void disp(que * t){
     node * a = t-> fr;
     if(t->fr === NULL){
         printf("\nEmpty Queue !");
         getch();
         return;
     }
     else{
         printf("\nData:-");
         while(a!=NULL){
             printf("\n%d",a->data);
             a = a->next;
         }
     }
}


void main(){
    node * p;
    int opt ,d;
    init(p);
    while(1){
        printf("\nMenu");
        printf("\n1.Insert.\n2.remove.\n3.Display.\n4.exit.\nWhats  your choise ?");
        scanf("%d",&opt);
        if(opt>3){
            break;
        }
        switch(opt){
            case 1: printf("\nEnter the data :-");
                    scanf("%d",&d);
                    insert(p,d);
                    break;

            case 2:remove(p);
                    break;

            case 3:disp(p);
                    getch();
                    break;
        }
    }
    getch();
}