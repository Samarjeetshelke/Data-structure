#include<stdio.h>

void main(){
    int arr[5];
    int i=0,j,tmp;

    int k=0;
    while(k<5){
        printf("\nEnter the data for arr[%d]: ",k);
        scanf("%d",&arr[k]);
        k++;
    }

    while (i<5-1)
    {
        j=i+1;

        while (j<5)
        {
            if(arr[i]>arr[j]){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
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