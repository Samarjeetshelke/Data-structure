#include<stdio.h>
#include<conio.h>

void main(){
    int i,j,n=10;
    int temp;
    int arr[]={6,4,7,8,9,0,1,2,2,5};

    for(i=0;i<=n-1;i++){
        for(j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] =arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(i=0;i<10;i++){
        printf("\n%d ",arr[i]);
    }
}
