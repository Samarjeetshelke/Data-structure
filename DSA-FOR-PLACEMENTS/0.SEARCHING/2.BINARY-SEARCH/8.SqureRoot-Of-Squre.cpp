// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int bsearch(int s,int e,int k){
    int mid = 0;
    int ans;
    int sqr = 0;
    
    while(s<=e){
        mid = s+(e-s)/2;
        sqr = mid*mid;
        
        if(sqr == k){
            return mid;
        }
        else if(sqr > k){
            e = mid -1;
            
        }
        else{
            s = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
int main() {
    
    int s = 0;
    int k;
    int e = k = 256;
  
    
    
    cout<<bsearch(s,e,k);
    

    return 0;
}
