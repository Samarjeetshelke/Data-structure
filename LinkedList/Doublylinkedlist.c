#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct dnode{
    struct dnode * next;
    int data;
    struct dnode * prev;
}dnode;

dnode * head=NULL;
dnode * end=NULL;

//navin tayar krto ani address return karto
dnode * creatnode(int d){

    dnode * s = (dnode*)malloc(sizeof(dnode));
    s->data=d;
    s->next=NULL;
    s->prev=NULL;

    return s;
}
//navin node add krto at end always
void add(int d){

    dnode * s;
    s=creatnode(d);

    if(head==NULL){
        head=end=s;
    }
    else{
        end->next=s;
        s->prev=end;
        end=s;
    }
    printf("\n%d is the last element",end->data);
}

void rDisplay(){

    dnode * s = end;
    if(s==NULL){
        printf("\nList is Empty!");
    }
    else{
        while(s!=NULL)
        {
            printf("\n%d",s->data);
            s=s->prev;
        }
    }
    
}

void fDisplay(){

    dnode * s = head;
    if(s==NULL){
        printf("\nList is Empty!");
    }
    else{
        while(s!=NULL)
        {
            printf("\n%d",s->data);
            s=s->next;
        }
    }
}

void main(){
    int ch,i;

    while(1){

        printf("\n1.Add List\n2.Dispay Reverse\n3.Display Forword.\n4.Exit\nEnter Choice?");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1: printf("\nEnter The Data: ");
                scanf("%d",&i);
                add(i);
                break;

        case 2: printf("\nPrinting the data in Reverse order: ");
                rDisplay();
                break;
        
        case 3: printf("\nPrinting the data in Forword Direction: ");
                fDisplay();
                break;
        
        default: exit(0);

        }
    }
}
