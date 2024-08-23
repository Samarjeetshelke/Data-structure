// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    int n=30;
    int k=9;
    int i=1;
    
    
    k=k-1;
    
    while(k>=0){
        if((n%i)==0){
            k--;
            cout<<i<<":"<<k;
        }
         i++;
    }

    if(k==0){
        cout<<i;
    }
    else{
        cout<<1;
    }
    return 0;
}
