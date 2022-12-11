#include<stdio.h>
#include<conio.h>

struct Stack{
    int top;
    char data[10];
}st;

void push(char a){
    st.top++;
    printf("\n%d",st.top);
    st.data[st.top]=a;
    printf("\n %c is pushed!",a);
}

int isEmpty(){
    if(st.top==-1){
        return 1;
    }
    return 0;
}

void init(){
    st.top=-1;
}
char pop(){

    char a = st.data[st.top];
    printf("\n%d",st.top);
    st.top--;
    return a;
}

void main(){
    char na[10];
    char na2[10];
    int i=0;

    void init();
    printf("\nEnter value:");
    scanf("%s",&na);

    printf("\n%s",na);
    while(na[i]!='\0'){
        push(na[i]);
        
        i++;
    }
    printf("\nAll Element are pushed!");

    i=0;
    while(!isEmpty()){
      na2[i]=pop();
      printf("\n%c is poped!",na2[i]);
      i++;  
    }
    printf("\n%s*",na2);
    
    if(na==na2){
        printf("\nIt is A Palindrome");
    }
    else{
        printf("\nIt Not is A Palindrome");
    }

}