#include<stdio.h>

int arr[10]={1,4,5,6,7,8,10,12,14,19};
int mid;

int binarysearch(int l,int h,int sv){
    mid=(l+h)/2;
    if(l>h){
        return 0;
    }
    
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
    int sv;

    printf("\nEnter the search value: ");
    scanf("%d",&sv);
    
    if(binarysearch(0,9,sv)){
        printf("\nThe %d is found!",sv);
    }
    else{
          printf("\nThe %d is not found!",sv);
    }
}