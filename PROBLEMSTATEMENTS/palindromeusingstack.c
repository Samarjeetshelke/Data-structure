#include<stdio.h>
#define MAX 15
#include<string.h>

struct stack{
    char arr[15];
    int top;
};
struct stack s;

void init(){
    s.top=-1;
}

void push(char data){
    if(s.top==MAX-1){
        printf("\nOverflow...");
        return;
    }
    s.top++;
    s.arr[s.top]=data;
    printf("%c is inserted!",s.arr[s.top]);
}

char pop(){
    if(s.top==-1){
        printf("\nUnderflow...");
        return '\0';
    }
    char ch=s.arr[s.top];
    s.top--;
    printf("%c is poped!",ch);
    return ch;
}

void main(){
    char ch[15];
    void init();
    int i=0;
    char ch1[15];

    printf("\nEnter the string: ");
    scanf("%s",&ch);

    while (ch[i]!='\0')
    {
        push(ch[i]);
        i++;
    }

   
    int j=i;
   i=0;

    while(i<j){
        if(ch[i]==pop()){
            i++;
        }
        else{
            break;
        }
    }

    

    if(j==i){
        printf("\nIs a palindrome....");
    }
    else{
        printf("\nIs not a palindrome....");
    }


}
