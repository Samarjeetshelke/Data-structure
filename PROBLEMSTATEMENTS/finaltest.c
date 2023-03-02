#include<stdio.h>

int arr[10]={0,1,2,3,4,5,6,7,8,9};

void swap(int * a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

int mid;
int binarysearch(int l,int h,int sv){
    if(l>h){
        return 0;
    }
    mid=(l+h)/2;
    if(arr[mid]==sv){
        return 1;
    }
    if(arr[mid]>sv){
        h=mid-1;
    }
    else{
        l=mid+1;
    }
    return binarysearch(l,h,sv);

}

void main(){
    int i=0;
    int j;
    

    /*while(i<10){//insertion sort
        j=i-1;
        int key=arr[i];
        
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        i++;
    }*/
/*//bubble sort
    while(i<(10-1)){
        j=0;

        while(j<(10-i-1)){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
            j++;
        }
        i++;
    }
*/
/*
    while(i<(10-1)){
        j=i+1;
        while(j<10){
            if(arr[i]>arr[j]){
                swap(&arr[i],&arr[j]);
            }
            j++;
        }
        i++;
    }
    */
   /*
    i=0;
    printf("\nThe data after sorting: ");

    while(i<10){
        printf("\n%d",arr[i]);
        i++;
    }
    */

   printf("\nEnter the data for search: ");
   scanf("%d",&j);
   if(!binarysearch(0,9,j)){
    printf("\nNot ");
   }
   printf("\nFound! ");
}