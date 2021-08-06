

#include<stdio.h>
#include<conio.h>
#include"list3.h"

void main(){
   slist *p,*q,*r;
   int op;
   int flg = 0 ;
   clrscr();
   init(p);
   init(q);
   init(r);
   while(1){
     clrscr();
     printf("\nMENU \n1.creatlist P\n2.creatlist Q \n3.display p \n4.display Q \n5.sort P \n6.sort Q\n7.display R \n8.merge P & Q \n9.exit");
     printf("\nwhats your option ?");
     scanf("%d",&op);
     if(op>10){
       break;
     }
     switch(op){
	case 1:creatlist(p);
	       break;

	case 2:creatlist(q);
	       break;

	case 3:disp(p);
	       getch();
	       break;

	case 4:disp(q);
	       getch();
	       break;

	case 5: sort(p);
		break;

	case 6:sort(q);
	       break;

	case 7:disp(r);
	       getch();
	       break;

	case 8: r = merge(p,q);
	       break;

	case 9: flg =1;
		break;
     }
     if(flg == 1){
	break;
     }
     //flushall();
   }
 getch();
}