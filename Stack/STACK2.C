#include<stdio.h>
#include<conio.h>
  int top=-1;
  int data[5];
void main(){
   int x;
   void push(int);
   int pop();
   int full();
   int empty();
   clrscr();
   //printf("\nPlease enter the data:-");
   while( full()!=1){
	printf("\nPlease enter the data:-");
	scanf("%d",&x);
	push(x);
   }
   if(top==4){
   printf("\nThe stack is full  Now.");
   }
   printf("\nprinting data.");
   while( empty()!=1){
	 printf("\n%d",pop());

   }
   if(top<0){
    printf("\nThe stack is empty,noww");
   }
getch();
}
int full(){
    if(top==4){
      return 1;
    }
    return 0;
}
void push(int x){
   top++;
   data[top]=x;
}
int empty(){
    if(top==-1){
     return 1;
    }
    return 0;
}
int pop(){
    int res = data[top];
      top--;
    return(res );

}