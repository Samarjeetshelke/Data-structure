#include<stdio.h>

void main(){
    int arr[5];
    int tmp,i=0,j,k=0;

    k=0;
    while(k<5){
        printf("\nEnter the data for arr[%d]: ",k);
        scanf(" %d",&arr[k]);
        k++;
    }

    printf("\nEnter the search value: ");
    scanf("%d",&tmp);

    while (i<5)
    {
        if(arr[i]==tmp){
            break;
        }
        i++;
    }

    if(i==5){
        printf("\nNot");
    }
    printf("\nFound!");
    
}