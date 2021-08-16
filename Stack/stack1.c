#include"stack1.h"
#include<stdio.h>
#include<conio.h>

void main(){
    stack * s;
    int opt ,d,flg =0;
    
    init(s);
    while(1){
       
        printf("\n1.push.\n2.pop.\n3.display.\nWhats your option ?");
        //flushall();
        scanf("%d",&opt);
        switch(opt){
            case 1: printf("\nente the element :-");
                    scanf("%d",&d);
                    push(s,d);
                    getch();
                    break;

            case 2:pop(s);
                    printf("\npop is performed !");
                    getch();
                    break;

            case 3: disp(s);
                    getch();
                    break;

            case 4:flg=1;
                    break;
        }
        if(flg==1){
            break;
        }
    }
    getch();
}