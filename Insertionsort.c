link :-"https://www.geeksforgeeks.org/insertion-sort/";

/*  insertion sort:-



*/
code:-
  // Programe for insertion sort
#include <stdio.h>
void sort(int *,int);//decleration
void disp(int *,int);//
int main() {
   int *p;
   int n,i;
  printf("\nplease enter the no:-");
  scanf("%d",&n);
  p=(int*)malloc(sizeof(int)*n);
  printf("\nenter the data:-");
  for(i=0;i<n;i++){
      scanf("%d",& *(p+i));
  }
  printf("\nBefour sort:-");
  disp(p,n);//call
  sort(p,n);//call
  printf("\nAfter the sorting:-");
  disp(p,n);
    
    
    return 0;
}
void disp(int *p,int n){  //defination
    int i;
    for(i=0;i<n;i++){
        printf("\n%d",*(p+i));
    }
}
void sort(int *p,int n){  //defination
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=*(p+i);
        for(j=i-1;j>=0 && *(p+j)>temp;j--){
            *(p+(j+1))=*(p+j);
        }
        *(p+(j+1))=temp;
    }

}
