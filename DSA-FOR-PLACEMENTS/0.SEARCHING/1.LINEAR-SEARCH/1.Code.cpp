// Online C++ compiler to run C++ program online
#include <iostream>


using namespace std;


int linearSearch(int arr[],int n,int x){
    int i=0;
    
    while(i<n){
        if(arr[i]==x)
            return i;
        i++;
    }
    
    return -1;
}


int main() {
    
    int arr[] ={2,3,1,78,5,8};
    
    int res = linearSearch(arr,(sizeof(arr)/sizeof(int)),78);
    if(res){
        cout<<"The index is "<<res;
    }
    else{
        cout<<"Not Found!";
    }
    return 0;
}

