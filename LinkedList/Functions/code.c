#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node{
    int id;
    // char nm[10];
    struct node * next;
}node;

node * head = NULL;

node * createnode(int id){
    node * a = (node*)malloc(sizeof(node));
    a->id = id;
    a->next = NULL;
    return a;
}

void addStart(int id){
    node * a = createnode(id);
    a->next = head;
    head = a;
}

void addEnd(int id){
    node * s = head;
    if(s==NULL){
        head = createnode(id);
    }
    else{
        while(s->next!=NULL){
            s=s->next;
        }
        s->next=createnode(id);
    }
}

void display(){
    node * s = head;
    printf("\nStudent ids: ");
    while(s!=NULL){
        printf("\n%d",s->id);
        s=s->next;
    }
}

void main(){
    
    int opt;
    int id;
    // char nm[15];

    while (1)
    {   
        //clrscr();
        getch();
        printf("---Student Management System---");
        printf("\n1.Display\n2.Add Node(Start)\n3.Add Node(End)");
        printf("\nEnter Option..");
        scanf("%d",&opt);

        switch (opt)
        {
            case 1: display();
                    break;
    
            case 2: printf("\nEnter the value..");
                    scanf("%d",&id);
                    // printf("\nEnter the Name..");
                    // scanf("%d",&nm);
                    addStart(id);
                    getch();
                    break;

            case 3: printf("\nEnter the value..");
                    scanf("%d",&id);
                    addEnd(id);
                    getch();
                    break;

            default: exit(1);
                     break;
        }
    }
}
