//simple example of linked list notproper functions
#include<stdio.h>
#include<conio.h>


typedef struct node{
    int data;           //Node
    struct node * next;
}node;

void main(){
    node * head = NULL;
    node * dis = NULL;

    node * a;
    node * b;
    node * c;

    a = (node*)malloc(sizeof(node));
    b = (node*)malloc(sizeof(node));
    c = (node*)malloc(sizeof(node));

    head = a;
    a->data = 1;
    a->next = b;
    b->data = 2;
    b->next = c;
    c->data = 3;
    c->next = NULL;

    printf("Address of head : %d",&head);
    printf("Address of a : %d",a);
    dis = head;
    while(dis!=NULL){
        printf("\n%d",dis->data);
        dis = dis->next;
    }


}
/*
output:
Address of head : 1956640568 Address of a : -808053744
1
2
3
*/
