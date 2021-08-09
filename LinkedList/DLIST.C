#include<stdio.h>
#include<conio.h>

typedef struct node{
   struct node *prev;
   int data;
   struct node *next;
}node;

typedef struct dlist{
   node * st;
   node *ed;
}dlist;

void init(dlist * a){
 a->st = NULL;
 a->ed = NULL;
}

node * creatnode(int d){
 node * c = (node*)malloc(sizeof(node));
 c->prev = NULL;
 c->data =d;
 c->next =NULL;
 return c;
}

void added(dlist * a,int d){
  node * c =creatnode(d);
  node * e = a->ed;
  if(a->st == NULL){
  //  printf("\nEmpty !");
    a->st = c;
  }
  else{
    e->next = c;
    c->prev = e;
  }
  a->ed = c;
}

void addbg(dlist * a,int d){
  node *c = creatnode(d);
  node *e = a->st ;
  if(a->ed == NULL){
    a->ed = c;
  }
  else{
    c->next = e;
    e->prev = c;
  }
  a->st = c;
}

void dispse(dlist * a){
 node *x = a->st;
 if(a->st ==NULL){
   printf("\nEmpty !");
 }
 else{
  printf("\nprinting data from start to end :-");
  while(x!=NULL){
    printf("\n%d",x->data);
    x = x->next;
  }
 }
 getch();
}

void dispes(dlist *a){
  node* x;
  x = a->ed;
  if(x == NULL){
    printf("\nEmpty !");
  }
  else{
    printf("\nprinting data form end to start :-");
    while(x!=NULL){
      printf("\n%d",x->data);
      x= x->prev;
    }
  }
  getch();
}

void main(){
 dlist *p;
  int flg =0,op,dd;
 init(p);

 clrscr();
 while(1){
 clrscr();
   printf("\n1.added.\n2.addbg.\n3.dispse.\n4.dispes.\n5.end.\nwhats your option ?");
   scanf("%d",&op);
   switch(op){
     case 1: printf("\ndata:- ");
	     scanf("\%d",&dd);
	     added(p,dd);
	     break;

     case 2: printf("\ndata:- ");
	     scanf("\%d",&dd);
	     addbg(p,dd);
	     break;

     case 3: dispse(p);
	     break;

     case 4: dispes(p);
	     break;

     default : flg =1;
	      break;
   }
   if(flg == 1){
     break;
   }

 }
}