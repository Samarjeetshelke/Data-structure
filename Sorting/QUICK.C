/* Quick sort*/
#include<stdio.h>
#include<conio.h>

void quick(int [],int,int);
int sort(int[],int,int);

void main(){
     int a[30],i,n;
     clrscr();
     printf("\nEnter  the nubers of element:-");
     scanf("%d",&n);
     printf("\nPlease enter the array element:-");
     for(i=0;i<n;i++){
      scanf("%d",&a[i]);
     }
     clrscr();
     printf("\nArray befoure sorting:-");
     for(i=0;i<n;i++){
      printf("\n%d",a[i]);
     }
     quick(a,0,n-1);
     printf("\nArray after sorting:-");
     for(i=0;i<n;i++){
      printf("\n%d",a[i]);
     }
     printf("\nEnd of the code");

 getch();
}
void quick(int a[],int lb,int ub){
     int mid;
     if(lb<ub){
	 mid=sort(a,lb,ub);
	 quick(a,lb,mid-1);
	 quick(a,mid+1,ub);
     }
}

int sort(int a[],int lb,int ub){
     int i,j,temp,v;
     v=a[lb];
     i=lb+1;
     j=ub;

     while(i<j){
       while(i<=ub&&a[i]<v){
	i++;
       }
       while(a[j]>v){
	j--;
       }
       if(i<j){
	  temp=a[i];
	  a[i]=a[j];
	  a[j]=temp;
       }
     }
     a[lb]=a[j];
     a[j]=v;
     return(j);
}