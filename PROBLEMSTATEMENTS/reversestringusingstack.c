#include<stdio.h>
#define MAX 10

char arr[10];
int top=-1;

void push(char ch){
    if(top==MAX-1){
        printf("\nUnderflow.....");
        return;
    }
    top++;
    arr[top]=ch;
    printf("%c is added.",ch);
}

void pop(){
    if(top==-1){
        printf("\nUmderflow.....");
        return;
    }
    printf("%c",arr[top]);
    top--;
}

void main(){
    char ch[10];
    int i=0;

    printf("\nEnter the string: ");
    scanf("%s",&ch);

    while(ch[i]!='\0'){
        push(ch[i]);
        i++;
    }

    printf("\nThe reverse of data: ");
    i=i-1;

    while(i>=0){
        pop();
        i--;
    }
}