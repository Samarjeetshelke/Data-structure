#include<stdio.h>
#include<conio.h>

typedef struct node{
  int data;
  struct node * next;
}node;

typedef struct slist{
   node * head;
}slist;

void init(slist *z){
    z->head =  NULL;
}

int sortt(slist * d){
   node *a,*b;
   a = d->head;
   while(a!=NULL){
      if(a==d->head){
	 b=a;
      }
      else{
	if(a->data < b->data){
	     break;
	}
	b=a;
      }
      a=a->next;
   }
   if(a!=NULL){
      return 0;
   }
   return 1;

}


node* merge(slist * x,slist * y){
   slist * t;
   node *a = x->head,*b = y->head,*e,*c,*d;
   int data;
   init(t);
   while(a!=NULL && b!= NULL){
       if(a->data < b->data){
	 data = a->data;
	 a = a->next;
       }
       else{
	 data = b->data;
	 b = b->next;
       }
       c = (node*)malloc(sizeof(node));
       c ->data = data;
       c ->next =NULL;
       if(t->head == NULL){
	  t->head = c;
       }
       else{
	 d = t->head;
	 while(d!=NULL){
	    e = d;
	    d = d->next;
	 }
	 e ->next = c;

       }
   }
   while(a!=NULL){
       data = a->data;
       c = (node*)malloc(sizeof(node));
       c->data = data;
       c->next = NULL;
       if(t->head == NULL){
	  t->head = c;
       }
       else{
	 d = t->head;
	 while(d!=NULL){
	    e = d;
	    d = d->next;
	 }
	 e ->next = c;

       }
       a = a->next;
   }
   while(b!=NULL){
       data = 	b->data;
       c = (node*)malloc(sizeof(node));
       c->data = data;
       c->next = NULL;
       if(t->head == NULL){
	  t->head = c;
       }
       else{
	 d = t->head;
	 while(d!=NULL){
	    e = d;
	    d = d->next;
	 }
	 e ->next = c;

       }
       b = b->next;

   }
   e = t->head;
   return e;
 }


void delall(slist * d){
   node *a,*b;
   a = d->head;
   d->head=NULL;
   while(a!=NULL){
      b=a->next;
      free(a);
      a=b;
   }
}


//void init(slist * z){
//   z->head = NULL;
//}
//
void creatlist(slist * d){
   node * a,*b,*c;
   int id;
   while(1){

      printf("\nenter:-");
      scanf("%d",&id);
      if(id == 0){ break;};
      a = (node*)malloc(sizeof(node));
      a->data = id;
      a->next = NULL;
     // b=a;
      if(d->head == NULL){
	 d->head = a;
      }
      else{
	 b = d->head;
	 while(b!=NULL){
	     c=b;
	     b = b->next;
	 }
	 c ->next = a ;
	// free(a);
	// free(b);
      }
   }


}
void disp(slist * d){
    node * x;

    if(d->head == NULL){
	 printf("\nlist is empty !");
      }
      else{
	 x = d->head;
	 while(x!=NULL){
	     printf("\n%d",x->data);
	     x = x->next;
	 }
	 printf("\nNULL___");
      }
      getch();
}

void main(){
 slist *d,*e,*v;
 int op,flg =0;
 clrscr();
 init(d);
 init(e);
 init(v);
 while(1){
    clrscr();
    printf("\n1.creat 1 list.\n2.creat 2 list.\n3.display 1 list.4.display 2 list.\n5.exit.\n6.delet 1.n\n7.delet 2.\n8.merge.\n9.display mearged.\n10.issort.");
    printf("\nenter option ");
    scanf("%d",&op);
    if(op<=10 && op >=1){
       switch(op){
	 case 1: creatlist(d);
		 break;

	 case 2: creatlist(e);
		 break;

	 case 3: disp(d);
		 break;

	 case 4:disp(e);
		 break;

	 case 5: flg =1;
		 break;

	 case 6:delall(d);
		break;

	 case 7:delall(e);
		break;

	 case 8:v ->head =  merge(d,e);
		break;

	 case 9:disp(v);
		break;

	 case 10: if(sortt(d)==0){
		   printf("\nNot ");
		  }
		  printf("  sort");
		  getch();
		  break;
       }


    }
    else{

       printf("\ninvalid....");
    }
    if(flg == 1){  break; };

 }
 getch();
}
