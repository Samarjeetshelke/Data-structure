// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {3,8,10,17,1,2};
    
    int s = 0;
    int e = 5;
    
     int  mid = 0;
     
     while(s<e){
         mid = s +((e-s)/2);
         
         if(arr[mid] > arr[0]){
            // s = mid + 1;
            s = mid;
         }
         else{
             e = mid-1;
         }
     }
     
     cout<<arr[e];
        
     

    return 0;
}
