#include<stdio.h>

void swap(int* a,int *b){
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}
void main(){
    int arr[5];
    int tmp,i=0,j,k=0;

    k=0;
    while(k<5){
        printf("\nEnter the data for arr[%d]: ",k);
        scanf(" %d",&arr[k]);
        k++;
    }

    while (i<5)
    {
        j=0;
        while(j<5){
            if(arr[j]>arr[j+1]){
               swap(&arr[j],&arr[j+1]);
            }
            j++;
        }
        i++;

    }
    

    
    k=0;
    printf("\nThe sorted data: ");
    while(k<5){
        printf("\n%d",arr[k]);
        k++;
    }
}