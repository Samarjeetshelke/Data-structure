// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int findPeak(int arr[],int n){
    int s=0;
    int e = n-1;
    int mid=0;
    
    
    while(s<e){
        mid = (s+e)/2;
        
        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
    
}
int main() {
    // Write C++ code here
   int arr[]= {1,3,5,4,3,2,0};
   
   cout<<"The peak is at index : "<<findPeak(arr,(sizeof(arr)/sizeof(int)));

    return 0;
}
