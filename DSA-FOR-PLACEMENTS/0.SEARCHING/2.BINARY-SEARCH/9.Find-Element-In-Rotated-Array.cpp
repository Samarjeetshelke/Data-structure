#include<iostream>
#include<algorithm>

using namespace std;

int bsearch(int arr[],int s,int e,int k){
    int mid;
    
    while(s<=e){
        mid = s+(e-s)/2;
        
        if(arr[mid]==k){
            return mid;
        }
        else if(k>arr[mid]){
            s = mid+1;
        }
        else{
            e = mid -1;
        }
    }
    return -1;
}


int main(){
    
    int arr[] = {6,7,8,90,1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    
    int s = 0;
    int e = n-1;
    int res,k = 6;
    int mid;
    
    while(s<e)
    {
        mid = s + (e-s)/2;
        
        if(arr[mid] > arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    
    if(arr[s] <= k && k <= arr[n-1]){
            
         res  = bsearch(arr,s,n-1,k);
    }
    else{
        
        res = bsearch(arr,0,s-1,k);
    }
    
    if(res>=0){
        cout<<"Position is: "<<res;
    }
    else{
        cout<<"Element not found!";
    }
    
    return 0;
    
}
