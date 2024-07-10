// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int binarySearch(int arr[],int n,int x){
    
    int s=0;
    int e=n-1;
    int mid;
    while(s<=e){
        mid = s+((e-s)/2);//solve the problem of larges values
        //like if s = 2^31-1   e=2^31-1 then mid will not fit in int
        if(arr[mid]==x){
            return mid;
        }
        else if(x>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6,87,90};
    
    int res = binarySearch(arr,(sizeof(arr)/sizeof(int)),1);
    
    if(res>=0){
        cout<<"The index is "<<res;
    }
    else{
        cout<<"Not Found!";
    }

    return 0;
}
