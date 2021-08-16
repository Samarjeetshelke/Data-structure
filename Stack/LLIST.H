#include<stdio.h>
#include<conio.h>

typedef struct node{
	struct node * next;
	int data;
}node;

typedef struct stack{
	node * head;
}stack;

//to initialise the list
void init(stack * t){
	t->head = NULL;
}

//to creat node
node * creatnode(int d){
	node * c;
	c = (node*)malloc(sizeof(node));
	c->next = NULL;
	c->data = d;
	return c;
}

//to add the node to the bigining
void delbg(stack * t){
	node * a = t->head;
	node * b;
	if(a == NULL){
		printf("\nThe list  is NULL");
		return;
	}
	else{
		b = a->next;
		t ->head = b;
		free(a);
	}
	return;
}

//To add bg
void addbg(stack * t,int d){
	node * a = t->head;
	node *c;
	c = creatnode(d);
	c->next = a;
	t->head = c;
	return;
}

//To display stack
void disp(stack * t){
	node * a =t->head;
	if(a==NULL){
		printf("\nempty.....");
		return;
	}
	printf("\nData:-");
	while(a!=NULL){
		printf("\n%d",a->data);
		a = a->next;
	}
	return;
}