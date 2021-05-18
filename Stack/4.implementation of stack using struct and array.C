#include<stdio.h>
#include<conio.h>

typedef struct stack{
   int data[5];
   int top;
}stack;
void push(stack* s,int x){
   s->top=s->top+1;
   s->data[s->top]=x;
}
int pop(stack* s){
   int a;
   a=s->data[s->top];
   s->top=s->top-1;
   return a;
}
int full(stack* s){
  if(s->top==4){
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

void main()
{
   stack s;
   int x;
   void ini(stack*);
   int empty(stack*);
   int full(stack*);
   void push(stack*,int);
   int pop(stack*);
   clrscr();
   ini(&s);
   while(full(&s)!=1){
      printf("\nPlease enter the number:-");
      scanf("%d",&x);
      push(&s,x);
   }
   printf("\nPrinting a data from the stack:-");
   while(empty(&s)!=1){
      printf("\n%d",pop(&s));

   }
   if(empty(&s)){
       printf("\nstack is empty now...");
   }


getch();
}
