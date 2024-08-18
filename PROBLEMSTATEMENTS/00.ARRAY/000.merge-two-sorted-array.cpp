// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int one[] = {1,2,5,7,90};
    int n = sizeof(one)/sizeof(int);
    int two[] = {3,4,6,89,900};
    int m = sizeof(one)/sizeof(int);
    
    int ans[10];
    
    int i=0;
    int j=0;
    int k =0;
    
    while(i<n&&j<m){
        if(one[i]<two[j]){
            ans[k++]= one[i++];
            
        }
        else{
            ans[k++]=two[j++];
        }
    }
    
    while(i<n){
        ans[k++]= one[i++];
    }
    
    while(j<m){
         ans[k++]=two[j++];
    }

    for(int o:ans){
        cout<<o<<endl;
    }
    return 0;
}
