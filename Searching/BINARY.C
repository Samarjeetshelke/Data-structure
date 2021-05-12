#include<stdio.h>
#include<conio.h>
//#include<graph.h>

int bsearch(int*,int,int);
void sort(int *,int);

void main(){
 int *a,i,res,sv,n;
 clrscr();
 printf("\nPlease enter the no of elements:-");
 scanf("%d",&n);
 a=(int*)malloc(sizeof(int)*n);
 printf("\nEner the data:-");
 for(i=0;i<n;i++){
  scanf("%d",(a+i));
 }
 for(i=0;i<n;i++){
  if(*(a+i)>*((a+i)+1)){
	 break;
  }
 }

 if(i==n){
  printf("\nArray is sorted");
 }
 else{
   printf("\nArray is Not sorted yet..Its sorted");

   sort(a,n);
   clrscr();
 }
 printf("\nEnter the search val");
 scanf("%d",&sv);
 res=bsearch(a,n,sv);
 if(res==1){
  printf("\nNot");
 }
 printf(" Found");
 getch();
}
void sort(int *a,int n){
 int i,j,tem;
 for(i=0;i<n-1;i++){
   for(j=i+1;j<n;j++){
     if(*(a+i)>*(a+j)){
       tem= *(a+i);
       *(a+i)=*(a+j);
	*(a+j)=tem;
      }

   }
 }


}
int bsearch(int* s,int n,int sv){
 int l=0,i;
 int r=n-1;
 int mid=(l+r)/2;

 for(i=0;i<n&&*(s+mid)!=sv;i++){
       if(sv>*(s+mid)){
	l=mid+1;
       }
       else{
	r=mid-1;
       }
       mid=(i+r)/2;

 }
 return(l>r);
}