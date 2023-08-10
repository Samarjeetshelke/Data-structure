#include <iostream>
using namespace std;


int bsearch(int n[],int l,int r,int s){
    if(l>r){
        return -1;
    }
    int mid=(l+r)/2;
    if(n[mid]==s){
        return mid;
    }
    if(s>n[mid]){
        return bsearch(n,mid+1,r,s);
    }
    else{
        return bsearch(n,l,mid-1,s);
    }
}


int main() {
 
    int n[]={2,3,6,9,10,11,15,17,28,39,68};
    
    int res=bsearch(n,0,10,15);
    if(res==-1){
        cout<<"\nThe given data is not found";
    }
    else{
        cout<<"\nGiven data is found in "<<res<<"  location.";
    }
    return 0;
}
