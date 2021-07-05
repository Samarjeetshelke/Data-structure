
#include<stdio.h>
#include<conio.h>
typedef  struct node{
 int data;
 struct node * next;
}node;
node * head = NULL;

node * creat(int d){  // int d for data
 node * a;
 a = (node*)malloc(sizeof(node));
 a->data = d;
 a->next =NULL;
 return a;
}

node *  getend(){

  node * s = head;
  while(s->next != NULL){
   s = s->next;
  }
  return s;
}

void addbig(int d){//int d for data
 node * a;
 a = creat(d);
 a->next = head;
 head = a;
}
void addend(int d){
 node * a ,* b;
 a = creat(d);
 if(head==NULL){
   head = a;
 }
 else{
   b = getend();
   b->next = a;

 }
 printf("\nNEW NODE IS INSERTD AT END");
}

void display(){
 node * a = head;
 if(a==NULL){
  printf("\nTHE LIST IS EMPTY !");
 }
 else{
  while(a != NULL){
   printf("\n%d",a->data);
   a = a->next;
  }             //LAST LEMENT IS NOT DISPLAYING
 }
 //printf("\n%d",
}

int totol(){
 int tot = 0;
 node * a = head;
 while(a!=NULL){
  tot = tot + a->data;
  a = a->next;
 }
 return tot;

}
int findmax(){
 node * a= head;
 int max= a->data;
 while(a!=NULL){
  if(max < a->data){
   max = a->data;

  }
  a = a->next;
 }
 return max;
}
int findmin(){
 node * a= head;
 int min=a->data;
 while(a!=NULL){
  if(min > a->data){
   min = a->data;

  }
  a = a->next;
 }
 return min;
}

int search(int sv){
 node * a = head;
 while(a!=NULL){
  if(a->data == sv){
   return 1;
  }
  a=a->next;
 }
 return 0;
}