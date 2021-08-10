
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

void delbg(dlist* t){
   node * a,*b;
   if(t->st == NULL){
      printf("\nempty list ");
      return;
   }
   a = t->st;
   b = a->next;
   b ->prev = NULL;
   t->st = b;
   free(a);
   return;
}

void deled(dlist * t){
   node *a = t->st,*b;
   if(t->st == NULL){
      printf("\nempty !");
      return;
   }
   while(a->next !=NULL){
      a = a->next;
   }

   b = a->prev;
   b ->next = NULL;
   t->ed = b;
   free(a);
   return;
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

int count(dlist * t){
   int i =1;
   node * a =t->st;
   while(a->next!=NULL){
     a=a->next;
     i++;
   }
   return i;
}
void delith(dlist * t,int pos){
   int i =1;
   node *a,*b,*c;
   if(t->st == NULL || pos <1){
      printf("\nwrong ");
      return;
   }
   if(pos== 1){
     delbg(t);
     return;
   }
   while(a != NULL && i<pos){
     a =a->next;
     i++;
   }
   if(a ==  NULL){
     printf("\nwrong pos !");
     return;
   }
   b = a->prev;
   c = a->next;
   c->prev = b;
   b ->next =  c;
   free(a);
   return;
}

void insaf(dlist * t,int d ,int pos){
   int i =1;
   node *a = t->st,*b,*c = creatnode(d);
   if(a ==NULL|| pos < 1){
     printf("\nwrong");
     return;
   }
   while(a!=NULL&&i<pos){
     a = a->next;
     i++;
   }
   if(a==NULL){
     printf("\nwrong");
   }
   b = a->next;
   a->next = c;
   c->prev = a;
   c->next = b;
   b->prev = c;
   return;
}

void main(){
 dlist *p;
  int flg =0,op,dd,pos;
 init(p);

 clrscr();
 while(1){
 clrscr();
   printf("\n1.added.\n2.addbg.\n3.dispse.\n4.dispes.\n5.end.\n6.count.\n7.delbg.\n8.deled.\n9.delith\n10.insert after:-\nwhats your option ?");
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

     case 6:printf("\n%d",count(p));
	    getch();
	    break;

     case 7:delbg(p);
	    break;

     case 8:deled(p);
	    break;

     case 9:printf("\nenter pos :- ");
	    scanf("%d",&pos);
	    delith(p,pos);
	    break;

     case 10:printf("\nenter pos :-");
	     scanf("%d",&pos);
	     printf("\nenter data :-");
	     scanf("%d",&dd);
	     insaf(p,dd,pos);
	     break;

     default : flg =1;
	      break;
   }
   if(flg == 1){
     break;
   }

 }
}