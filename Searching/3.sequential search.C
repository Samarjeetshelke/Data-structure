
#include<stdio.h>
#include<conio.h>

 int search(int*,int,int);
void main()
{
  int*a,n,sv;
  int res,i;
  clrscr();
  a=(int*)malloc(sizeof(int)*n);
  printf("\nPlease enter the no of elements:-");
  scanf("%d",&n);
  for(i=0;i<n;i++){
   scanf("%d",&a[i]);
  }
  printf("\nEnter the search value");
  scanf("%d",&sv);

 /* if(search(a,sv,n)==1){
   printf("\Val is found");
  }
  else{                        //This for logic 1
   printf("\nNot found");
  }  */
  res=search(a,sv,n) ;
  if(res==-1){
   printf("\nNot found");
  }
  else{
  printf("\nThe val %d is Found at location A[%d]..",sv,res);
  }
getch();
}
/*int search(int *a,int sv,int n){
 int i;
 for( i=0;*(a+i)!=sv; ){
  i++;                           /This for logic 1
 }
 return(i!=n);
} */
int search(int *a,int sv,int n){
 int i=0;
 while(i<n){
     if(*(a+i)==sv){
      return(i);
     }
 i++;
 }

 return(-1);
}
