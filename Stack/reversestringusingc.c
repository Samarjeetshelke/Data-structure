#include<stdio.h>

struct Stack{
    int top;
    char data[10];
}st;

void push(char data){
    st.top++;
    st.data[st.top]=data;
}

char pop(){
    char s;

    if(st.top<0){
        printf("stack is empty");
        return '0';
    }
    s= st.data[st.top];
    st.top--;
    return s;
}

int isEmpty(){
    if(st.top<0){
        return 1;
    }
    return 0;
}
void init(){
    st.top=-1;
}
void main(){
    
    char  strings[10];
    int i = 0;

    void init();

    printf("Enter A string: ");
    scanf("%s",&strings);

    while(strings[i]!='\0'){
        push(strings[i]);
        i++;
    }

    printf("\nTHe string is reverse:");

    while(!isEmpty()){
        printf("%c",pop());
    }
    

}
