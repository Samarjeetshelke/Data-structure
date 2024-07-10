// Online C++ compiler to run C++ program online
#include <iostream>
#include<array>
using namespace std;

int main() {
    
    int arr[] ={2,3,1,78,5,8};
    
    int i=0;
  /*  for(int i : arr){
       if(i==78){
           cout<<"Yes";
       }
    
    }
*/
    int n = sizeof(arr)/sizeof(int);
    while(i<n){
        if(arr[i]==5)
            cout<<"Yes";
            
        i++;
    }
    return 0;
}
