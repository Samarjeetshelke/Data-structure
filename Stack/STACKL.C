#include"llist.h"

void main(){
	stack * p;
	int d, flg = 0,opt;
	clrscr();
	init(p);
	while(1){
		clrscr();
		printf("\n1.Push.\n2.Pop.\n3.disp.\nWhats your choise ?");
		scanf("%d",&opt);
		switch(opt){
			case 1: printf("\nEnter the no:-");
				scanf("%d",&d);
				addbg(p,d);
				break;

			case 2: delbg(p);
				printf("\nElement is deleted");
				getch();
				break;

			case 3:disp(p);
				getch();
				break;

			case 4:flg=1;
				break;

		}
		if(flg == 1){
			break;
		}


	}


 getch();
}