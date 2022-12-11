#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

  

    int  top1=-1;
    int  top2=4;
    int  data[10];

//top 1 for stack 1 and start from 0 to 4 & stack 2 start from 5 to 9 index

    void push1(){
        int n;
        if(top1==4){
            printf("\nStack 1 Overflow");
        }
        else{
             printf("Enter Data: ");
             scanf("%d",&n);
             top1++;
             data[top1]=n;
        }
       
    }

    void pop1(){
        if(top1<0){
            printf("\nStack 1 underflow");
        }
        else{
            printf("\n%d",data[top1]);
            top1--;
        }
    }

    void push2(){
        int n;
        if(top2==9){
            printf("\nStack 2 Overflow");
        }
        else{
             printf("Enter Data: ");
             scanf("%d",&n);
             top2++;
             data[top2]=n;
        }
    }

     void pop2(){
        if(top2<5){
            printf("\nStack 1 underflow");
        }
        else{
            printf("\n%d",data[top2]);
            top2--;
        }
    }

    int isfull1(){
        if(top1==4){
            return 1;
        }
        return 0;
    }

     int isfull2(){
        if(top2==9){
            return 1;
        }
        return 0;
    }

    int isempty1(){
        if(top1==-1){
            return 1;
        }
        return 0;
    }

     int isempty2(){
        if(top2==4){
            return 1;
        }
        return 0;
    }

    void main(){
        int ch,n;

        while(1){
            printf("\n1.Add To Stack 1.\n2.Add to stack 2.\n3.Remove From stack 1\n4.Remove from stack2\nEnter?");
            scanf("%d",&ch);
            switch(ch){
                case 1: push1();
                        break;

                case 2: push2();
                        break;

                case 3: pop1();
                        break;

                case 4: pop2();
                        break;

                default:exit(0);
            }
        }
    }