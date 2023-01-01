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

void insertatbeg(int d){

    node * s;
      s=createNode(d);
      s->next=head;
      head=s ; 

    printf("\nThe element is inserted at begining.");
}

void insertatend(int d){
    node *s,*a;
    s=head;
    if(head==NULL){
        insertatbeg(d);
    }
    else{
        while(s->next!=NULL){
            s=s->next;
        }
        a=createNode(d);
        s->next=a;
    }
    printf("\nThe element is inserted at end.");
}

void deleteatbeg(){
    node * s;
    int d;
    s=head;
    d=s->data;
    head=head->next;
    free(s);
    printf("\nThe element is deleted at begining.");
}

void deletetend(){
    node * s,*pre;
    s=head;

    while(s->next!=NULL){
        pre = s;
        s=s->next;
    }
    pre->next=NULL;
    printf("\nThe element is deleted at end.");
    free(s);  
}
void delete_at_givenPos(){
    int i=1;
    int pos;
    node *s=head,*pre;

    printf("\nEnter The Position:");
    scanf("%d",&pos);

    while(i<pos){
        if(s==NULL){
            printf("The given position is not Available...");
            return;
        }
        pre=s;
        s=s->next;
        i++;
    }
    pre->next=s->next;
    free(s);
    printf("\nThe Element at giving positon is deleted!");


}
void insert_at_givenPos(){
    int i=1;
    int pos,n;
    node * s,*pre;
    s=head;  

    printf("\nEnter The Element:");
    scanf("%d",&n);
    printf("\nEnter The Position:");
    scanf("%d",&pos);
    
    
    while(i<pos){
        s=s->next;
        i++;
    }
    pre=s->next;
    s->next=createNode(n);
    s->next->next=pre;
    printf("\nThe element is inserted  at given Position.");
}

void delete_alternate(){
     node *s =head,*s;
  
}
void display_alternate(){
    node *s =head;
    int flg=0;
    printf("\nPrinting Alternate Element is List: ");
    while(s!=NULL){
        if(flg==0){
           printf("\n%d",s->data);
        }
        s=s->next;
        if(flg==1){flg=0;}else{flg=1;}
    }
}
void display(){
    node *s=head;
    while (s!=NULL)
    {   
        printf("\n%d",s->data);
        s=s->next;
    }
    
}
void main(){
    int ch,n;

    while(1){
        printf("\n1.Insert At Beg\n2.Insert At End\n3.Delete At Beg\n4.Delete At End\n5.display\n6.Insert at given position\n7.Delete at Given  Position\n8.Display Alternate\n9.Delete Alternate\nEnter Your Choise?");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:printf("\nEnter Data:");
                scanf("%d",&n);
                insertatbeg(n);
            break;

        case 2:printf("\nEnter Data:");
                scanf("%d",&n);
                insertatend(n);
            break;

        case 3:deleteatbeg();
               break;

        case 4:deletetend();
             break;

        case 5:display();
            break;

        case 6:insert_at_givenPos();
                break;

        case 7:delete_at_givenPos();
                break;

        case 8:display_alternate();
                break;
        case 9:delete_alternate();
                break;
        default:
                exit(0);
            break;
        }
    }
}
