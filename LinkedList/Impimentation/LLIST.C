#include<stdio.h>
#include<conio.h>
#include"llist.h"

void main(){
 int n,data,flg,sv;
 clrscr();

 while(1){
  clrscr();
    printf("MENU\n1.ADDBIGNING\n2.ADDEND.\n3.DISPLAY.\n4.EXIT\n5.TOTAL.\n6.FINDMAX.\n7.FINDMIN.\n8.SEARCH");
    printf("ENTER YOUR CHOISE ?");
    scanf("%d",&n);
    switch(n){
       case 1: printf("\nENTER THE DATA:-");
	       scanf("%d",&data);
	       addbig(data);
	       break;

       case 2:printf("\nENTER THE DATA:-");
	      scanf("%d",&data);
	      addend(data);
	      break;

       case 3: printf("DATA IS DISPLAYING");
	       display();
	       break;

       case 4: flg = 1;																																																																																																																															    break;
	       break;

       case 5:printf("\nTOTOL OF LIST %d",total());
	      break;

       case 6:printf("\nTHE MAX NO FROM LIST IS %d ",findmax());
	      break;

       case 7:printf("\nTHE MIN NO FROM LIST IS %d",findmin());
	      break;

       case 8:printf("\nENTER THE NO TO SEARCH:-");
	      scanf("%d",&sv);
	      if(search(sv)==1){
	       printf("\nFOUND");
	      }
	      else{
	       printf("\nNOT FOUND!");
	      }
	      break;


      }
      getch();
      if(flg == 1){
	  break;
      }
    }


 getch();
}