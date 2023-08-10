//simplest linear search ever

#include <iostream>
using namespace std;


int main() {
    // Write C++ code here
    int n[]={2,3,6,9,10,11,15,17,28,39,68};
  
    for(int i:n){
        cout<<i<<" ";
        if(i==17/*it can be your search value*/){
            cout<<"\nFound";
            break;
        }
    }
  
    return 0;
}
