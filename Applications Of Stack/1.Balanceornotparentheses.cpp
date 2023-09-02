#include<iostream>
using namespace std;

char stack[10];
int top=-1;


int isEmpty(){
    if(top<0){
        return 1;
    }
    return 0;
}

int isFull(){
    if(top==9)
    {
        return 1;
    }
    return 0;
}

void push(char x) {
    top++;

    if(!isFull()){
        stack[top]=x;
        cout<<"\n"<<x<<" is pushed! : top:"<<top;
    }
    else{
        cout<<"Stack Overflow"<<endl;
    }
    
}

int fornt(){
    if (!isEmpty()){
        return (stack[top]);
    }
    else{
        cout<<"\nStack is Empty! top:"<<top;
        return -1;
    }
}

void pop(){
    if(!isEmpty()){
        cout << "\n" << "Popped element: "<<stack[top]<<"top:"<<top;
        top--;
    }
    else{
        cout <<"Stack Underflow";
    }
}

void display(){
    cout<<"\nDisplayng data: ";
    int i=0;
    while(i<top){
        cout<<"\n"<<stack[i];
        i++;
    }
}


int main(int argc, char const *argv[])
{

    int opt;
    int ch;
    string str;
    cout<<"\nEnter the String: ";
    cin>>str;
    cout<<str;

    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='{' ){
            push(str[i]);
        }
        if(str[i]=='}'){
            pop();
        }

        i++;
        
    }
    
   if(top==-1){
    cout<<"\nBAlanced!";
   }
   else{
    cout<<"\nNot Balanced!";
   }
    return 0;
}
