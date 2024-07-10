// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int binarySearch(int arr[],int x,int s,int e){
    
    cout<<"\n"<<s<<" "<<e;
    if(s>e){
       return -1;
        
    }
    int mid = s+((e-s)/2);
            cout<<"\n"<<mid;
        if(arr[mid]==x){
            return mid;
        }
        else if(x>arr[mid]){
           // s = mid+1;
            return binarySearch(arr,x,mid+1,e);
        }
        else{
            //e = mid-1;
            return binarySearch(arr,x,s,mid-1);
        }
    
    
    
  
}

int main() {
    int arr[] = {1,2,3,4,5,6,87,90};
    
    int res = binarySearch(arr,2,0,(sizeof(arr)/sizeof(int)-1));
    
    if(res>=0){
        cout<<"The index is "<<res;
    }
    else{
        cout<<"Not Found!";
    }

    return 0;
}
