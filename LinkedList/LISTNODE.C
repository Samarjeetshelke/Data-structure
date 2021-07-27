#include<stdio.h>
#include<conio.h>

typedef struct node{
  int data;
  struct node * next;
}node;

typedef struct slist{
   node * head;
}slist;
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
void init(slist * d){
   d->head = NULL;
}

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
 slist *d;
 int op,flg =0;
 clrscr();
 init(d);
 while(1){
    clrscr();
    printf("\n1.creat list.\n2.display list.\n3.exit.\n4.delet.\n5.issort.");
    printf("\nenter option ");
    scanf("%d",&op);
    if(op<=5 && op >=1){
       switch(op){
	 case 1: creatlist(d);
		 break;

	 case 2: disp(d);
		 break;

	 case 3: flg =1;
		 break;

	 case 4:delall(d);
		break;

	 case 5: if(sortt(d)==0){
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