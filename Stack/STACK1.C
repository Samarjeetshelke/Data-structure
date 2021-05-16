#include<stdio.h>
#include<conio.h>
  int top=-1;
void main(){
 int data[5];

   int x;
   void push(int *,int);
   int pop(int *);
   int full();
   int empty();
   clrscr();
   //printf("\nPlease enter the data:-");
   while( full()!=1){
	printf("\nPlease enter the data:-");
	scanf("%d",&x);
	push(data,x);
   }
   if(top==4){
   printf("\nThe stack is full  Now.");
   }
   printf("\nprinting data.");
   while( empty()!=1){
	 printf("\n%d",pop(data));

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
void push(int * data,int x){
   top++;
   *(data+top)=x;
}
int empty(){
    if(top==-1){
     return 1;
    }
    return 0;
}
int pop(int* data){
    int res = *(data+top);
      top--;
    return(res );

}