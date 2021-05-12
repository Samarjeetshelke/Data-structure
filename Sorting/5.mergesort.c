/*Merge Sort is a Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves, 
and then merges the two sorted halves. The merge() function is used for merging two halves. The merge(arr, l, m, r) is a key process that assumes that arr[l..m] and arr[m+1..r]
are sorted and merges the two sorted sub-arrays into one*/


Code:-
  #include<stdio.h>
#include<conio.h>
#define MAX 30

void mergesort(int[],int,int);
void merge(int[],int,int,int);
void main(){
  int a[30],n,i;
  clrscr();
  printf("\nEnter the no of element:-");
  scanf("%d",&n);
  printf("\nPlease enter the data:-");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  clrscr();
  printf("\nDta befour sorting:-\n");
  for(i=0;i<n;i++){
   printf("%d\n",a[i]);
  }
  mergesort(a,0,n-1);
  printf("\nData after the sorting:-");
  for(i=0;i<n;i++){
   printf("\n%d",a[i]);
  }
  getch();
}
void mergesort(int a[],int i,int j){
    int k;
    if(i<j){
     k=(i+j)/2;
     mergesort(a,i,k);
     mergesort(a,k+1,j);
     merge(a,i,k,j);
    }

}
void merge(int a[],int l,int m,int u){
   int c[MAX];
   int i,j,k,z;
   i=l;
   j=m+1;
   k=0;
   while(i<=m&&j<=u){
      if(a[i]<a[j]){
	 c[k]=a[i];
	 k++;
	 j++;
      }
      else{
       c[k]=a[i];
       i++;
       k++;
      }
   }
   while(i<=m){
    c[k]=a[i];
    i++;
    k++;
   }
   while(j<=u){
    c[k]=a[j];
    j++;
    k++;
   }

   for(i=l,j=0;i<=u;i++,j++){
    a[i]=c[j];
   }

}

This ompletely code is  not dynamically:.
