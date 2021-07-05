#include<stdio.h>
#include<conio.h>
#define m 15

  typedef struct stack{
  int data[m];
  int top;
  }st;


  void push(st * s,int pn){
    s->top=s->top+1;
    s->data[s->top]=pn;
  }

  int pop(st * s){
   int x;
   x = s->data[s->top];
   s->top = s->top-1;
   return x;
  }

  int isFull(st* s){
   if(s->top==m-1){
      return 1;
   }
   return 0;
  }

  int isEmpty(st* s){
   if(s->top == -1){
    return 1;
   }
   else{
    return 0;
   }
  }

  void display(st* s){
   printf("\n Stack :-");
   while(1){
     if(isEmpty(s)!=1){
      printf("\n%d",pop(s));
     }
     else{
      printf("\n Now Empty");
      break;
     }
   }
  }


