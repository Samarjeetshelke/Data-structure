// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;


int main() {
    
    int s;
    cout<<"Enter Start:";
    cin>>s;
    
    int e;
    cout<<"Enter End:";
    cin>>e;

    int k;
    cout<<"Enter Element:";
    cin>>k;
    
    int count=0;
    
    
    while(s<=e){
        int sub=0;
        int n =s ;
        while(n>0){
            if(n%10==k){
                sub++;
            }
            n/=10;
        }
        count+=sub;
        s++;
    }
    cout<<"The Total Occurance:"<<count;
    return 0;
}
