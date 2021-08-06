#include<stdio.h>
#include<conio.h>

typedef struct node{
     int data;
     struct  node * next;
}node;

typedef struct slist{
    struct  node * st;
}slist;

//function to initilize the slists
void init(slist * t){
     t->st = NULL;
}

//function to creating node
node* creatnode( int n){
     node * c = (node*)malloc(sizeof(node));
     c->data =n;
     c->next =NULL;
     return c;
}

//function to creat slists
//q is used to reduce size ,and its  uses to store last node
//to stop the no of element entering  in list enter  0 ;
void creatlist(slist *t){
     int data;
     node *x,*q;
     while(1){
	printf("\nEnter the data:-");
	scanf("%d",&data);
	if(data ==  0)
	    break;

	x = creatnode(data);
	if(t->st == NULL){
	  t->st = x;
	  q=x;
	}
	else{
	  x = creatnode(data);
	  q->next = x;
	  q = x;
	}
     }

}

//this fnction to display  the list
void disp(slist * t){
     node * d = t->st;
     if(t->st == NULL){
       printf("\nlist is empty !");
     }
     else{
       printf("\nDATA:-");
       while(d!=NULL){
	 printf("\n%d",d->data);
	 d=d->next;
       }
     }
}

//this function to delet all the data and list
void delall(slist * t){
     node *a = t->st;
     node * b;
     while(a!=NULL){
	 b = a->next;
	 free(a);
	 a=b;
     }
}

//this function chake that the data is in orderd or not
//if is in ordered it return 1

int isOrderd(slist * t){
     node *a,*b;
     a = t-> st;
     while(a!=NULL){
	 if(a == t->st){
	     b = a;
	 }
	 else{
	     if(a->data < b->data){
		break;
	     }
	     b = a;
	 }
	 a = a->next;
     }
     if(a!=NULL){
	 return 0;
     }
     return 1;
}

//function to sort the given list :O(n^2)
void sort(slist * t){
     node * i ,*j;
     int flg;
     //Iterate from first node to last
     for( i=t->st; i != NULL; ){
	  flg = 1;

	 //Sort every bubble after that
	 for(j=i; j->next!=NULL; ){

	      //Sort the bubble
	     if(j->data <  j->next->data){
		int tmp = j->data;
		j->data = j->next->data;
		j->next->data = tmp;
		flg =0;

		//Increment
		j= j->next;
	     }

	     //If already sorted, break
	     if(flg)
		break;

	     //Increment
	     i = i->next;
	}
     }
}

//this function to merge two lists innto another lis
slist * merge(slist * p,slist *q){
     node * a = p->st,*b = q->st,*c,*d;
     int data;
     slist * r;
     init(r);
     sort(p);
     sort(q);
     while(a!=NULL && b!=NULL){
       if(a->data < b->data){
	     data = a->data;
	     a = a->next;
       }
       else{
	     data = b->data;
	     b = b->next;
       }
       c = creatnode(data);
       if(r->st == NULL){
	     r->st = c;
	     d = c;
       }
       else{
	    d->next = c;
	    d = c;
       }
     }
    if(a!=NULL){
     while(a!= NULL){
       data = a->data;
       c = creatnode(data);
       if(r->st == NULL){
	    r->st = c;
	    d = c;
       }
       else{
	   d->next = c;
	   d = c;
       }
       a = a->next;
     }
    }
    else{
     while(b!= NULL){
       data = b->data;
       c = creatnode(data);
       if(r->st == NULL){
	   r->st = c;
	   d = c;
       }
       else{
	   d->next = c;
	   d = c;
       }
       b = b->next;
     }
    }
     return r;
}