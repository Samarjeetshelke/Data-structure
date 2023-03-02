#include<stdio.h>
#include<stdlib.h>
#define size 10
typedef struct node{
    int data;
    struct node *right;
    struct node *left;
}node;

node * root =NULL;

node * arr[10];
int fr=-1,rr=-1;


int isEmpty(){
    if(fr==-1||fr>rr){
        return 1;
    }
    return 0;
}

void enqueue(node * data){
    if(rr==size-1){
        printf("\nFull..cant insert!");
        return;
    }
    if(fr==-1){
        fr=0;
    }
    else{
        rr=rr+1;
        arr[rr]=data;
    }

}

node * dequeue(){
    if(fr==-1){
        printf("\nEmpty..cant work!");
        return NULL;
    }
    node * s=arr[fr];
    fr=fr+1;
    printf("%d",s->data);
    return s;
}


node * createnode(int datax){
    node *s=(node*)malloc(sizeof(node));
    s->data=datax;
    s->left=NULL;
    s->right=NULL;
    return s;
}

node * insert(node * root,int datax){

    if(root==NULL){
        return createnode(datax);
    }

    if(datax<root->data){
        root->left=insert(root->left,datax);
    }
    else{
        root->right=insert(root->right,datax);
    }
    return root;
}

void bfstree(node * root){

    if(root==NULL){
        printf("\nThe tree is empty!");
        return;
    }

    node * s;
    enqueue(root);
    printf("enqueu is donw");
    while(isEmpty()){
        s=dequeue();
        printf("%x",s);
        printf("->%d",s->data);

        if(s->left!=NULL){
            enqueue(root->left);
        }
        
        if(s->right!=NULL){
            enqueue(root->right);
        }
    }
}

void inorder(node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("->%d",root->data);
    inorder(root->right);
}

void preorder(node * root){
    if(root==NULL){
        return;
    }
    printf("->%d",root->data);
    inorder(root->left);
    
    inorder(root->right);
}

void postorder(node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
   
    inorder(root->right);
    printf("->%d",root->data);
}

void main(){
    int opt;
    int data;

    printf("\nEnter the data: ");
            scanf("%d",&data);
            root=insert(root,data);

    while(1){
        printf("\n1.Insert\n2.Inorer\n3.bfs\nEnter The option: ");
        scanf("%d",&opt);
        if(opt==1){
            printf("\nEnter the data: ");
            scanf("%d",&data);
            insert(root,data);
        }
        else if(opt==2){
            printf("\nData is INORDER: \n");
            inorder(root);
            printf("\nData is PREORDER: \n");
            preorder(root);
            printf("\nData is POSTORDER: \n");
            postorder(root);
        }
        else if(opt==3){
            printf("\nBreadth First Search: \n");
            bfstree(root);
        }
        else{
            break;
        }
    }
}