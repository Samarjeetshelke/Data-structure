#include<stdio.h>
#include<conio.h>

void main(){
    int x[10],sv,i,lh,rh,mid;

    for(i=0;i<10;){
	printf("\nenter :-");
	scanf("%d",&x[i]);
	if(i>0){
	    if(x[i-1]>x[i]){
		printf("\nInvalidv!");
		 continue;
	     }
	}
	i++;
    }
    printf("\nEnter the search val:-");
    scanf("%d",&sv);
    lh=0;
    rh =9;


    do{
	mid = (lh+rh)/2;
     if(sv == mid){
	    break;
	}
	if(sv < mid){
	    rh = mid -1;
	}
	else{
	    lh = mid + 1;
	}

    }while(lh<=rh);
    if(lh>rh){
	printf("\nNot fOund!");
    }
    else{
	printf("\nfound ");
    }

    getch();
}