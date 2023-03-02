#include<stdio.h>

void main(){
    int arr[5];

    int i=1,j;

    int k=0;
    while(k<5){
        printf("\nEnter the data for arr[%d]: ",k);
        scanf("%d",&arr[k]);
        k++;
    }

    while(i<5){
        int key=arr[i];
        j=i-1;

        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        i++;
    }

    k=0;
    printf("\nThe sorted data: ");
    while(k<5){
        printf("\n%d",arr[k]);
        k++;
    }
}