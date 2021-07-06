#include<stdio.h>
#include<conio.h>
#include"expost.h"

void main(){
 int n,op1,op2;
 st s;
 char ch;
 clrscr();
 init(&s);
 while(1){
    flushall();
    printf("enter char :-");
    scanf("%c",&ch);
    if(ch== '!'){
     break;
    }
    if(ch=='+' ||ch=='-'||ch=='*'||ch=='/'){
     op2 = pop(&s);
     op1 = pop(&s);
     eval(&s,op1,op2,ch);//ch for operation
    }
    else{
     push(&s,(ch-48));
    }
 }
 printf("\nyour ans is %d ",pop(&s));
 getch();
}