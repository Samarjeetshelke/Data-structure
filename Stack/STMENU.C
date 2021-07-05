#include<stdio.h>
#include<conio.h>
#include"stfun.h"

void push(st *,int);
int pop(st *);
int isFull(st*);
int isEmpty(st*);

void main(){
 st s;
 int n,flg,pn;
 clrscr();

 while(1){
   flg=0;
   printf("\nMENU");
 printf("\n1.ISFULL.\n2.ISEMPTY.\n3.PUSH.\n4.POP.\n5.DISPLAY.\n6.EXIT.2");
 printf("\nENTER YOUR CHIOISE\n");
 scanf("%d",&n);
   switch(n){
    case 1:  if(isFull(&s)==1){
	    printf("Stack  is full.");
	   }
	   else{
	    printf("\nStack is not full");
	   }
	   break;

    case 2 :  if(isEmpty(&s)==1){
	    printf("Stack  is Empty.");
	   }
	   else{
	    printf("\nStack is not Empty");
	   }
	   break;

    case 3:  printf("\nEnter the no to push");
	  scanf("%d",&pn);
	  if(isFull(&s)!=1){
	   push(&s,pn);
	  }
	  else{
	   printf("\nStack is Full!");
	  }
	  break;

    case 4: if(isEmpty(&s)!=1){
	      printf(" YOUR ELEMENT Is %d",pop(&s));
	    }
	    else{
	      printf("stack is Empty!");
	    }
	     break;

    case 5: display(&s);
	    break;

    case 6: flg = 1;
	    break;

    default:
	 printf("WRONG CHOISE !");
	 break;
   }
   getch();
   clrscr();
   if(flg==1){
	 break;
   }
 }


 getch();
}

