#include<stdio.h>
#include<conio.h>
#define m 10

typedef struct stack{
   int data[m];
   int top;       //defination
}st;

void init(st * s){
 s->top = -1;

}
void push(st* s ,int x){
 if(isfull(s)!=1){
     s->top = s->top+1;
     s->data[s->top] = x;
 }
 else{
  printf("\nSTACK IS FULL!");
 }
}

int isfull(st* s ){
 if(s->top > m-1 ){
  return 1;
 }

 return 0;
}


int pop(st* s){
 int a;
 if(isempty(s)!=1){
   a = s->data[s->top];
   s->top = s->top - 1;
   return a;
 }
 else{
   printf("\nSTACK IS EMPTY!");
   return 0;
 }
}

int isempty(st* s){
 if(s->top < 0){
   return 1;
 }
 return 0;
}

void eval(st * s ,int op1,int op2,char opr){
  int res = 0;
  switch(opr){
   case '+' : res =op1+op2;
	      break;

   case '-' : res = op1-op2;
	      break;

   case '*' : res = op1*op2;
	      break;

   case '/' : res = op1+op2;
	       break;
  }
 push(s,res);
}