#include<stdio.h>
#include<conio.h>

typedef struct stack{
    int data[10];
    int top;
}stack;

void push(stack* s,int x){
   s->top = s->top+1;
   s->data[s->top] = x;
}
int pop(stack* s){
  int a;
  a = s->data[s->top];
  s->top = s->top-1;
  return a;
}
int full(stack* s){
  if(s->top==9){
    return 1;
  }
  return 0;
}
int empty(stack* s){
 if(s->top==-1){
  return 1;
 }
 return 0;
}
void ini(stack* s){
 s->top=-1;
}
void main(){

  int n,temp;
  stack s;
  clrscr();
  printf("\nEnter the no for convert in binary:-");
  scanf("%d",&n);
  temp = n;
  ini(&s);
  while(n!=0){
      push(&s,n%2);
      n=n/2;
  }
  printf("\nBinary of %d :- ",temp);
  while(empty( &s ) != 1){
      printf("%d",pop(&s));
  }
  if(empty(&s)==1){
    printf("\nstack is empty now.");
  }

 getch();
}