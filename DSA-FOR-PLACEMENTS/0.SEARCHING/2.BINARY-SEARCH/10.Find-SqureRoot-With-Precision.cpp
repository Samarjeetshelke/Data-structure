// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

double withPre(int tmp , int p,int k){
    
    double fact = 1 ;
    double final = 0 ;
    
    for(int i=0;i<p;i++){
        fact /= 10;
        
        for(double a = tmp; (a*a)<k;a+=fact){
            final = a;
            
        }
        
    }
    return final;
}

int tempSqr(int s,int e,int k){
    
    int mid  =0;
    int ans;
    int sqr ;
    
    while(s<=e){
        mid = s+(e-s/2);
        sqr = mid*mid;
        
        if(sqr == k){
            return mid;
        }
        else if(sqr > k){
            e = mid -1;
        }
        else{
            s = mid +1;
            ans = mid;
        }
    }
    
    return ans;
}


int main() {
    
    int tmp = tempSqr(0,37,37);
    cout<<tmp;
    cout<<"\nSqureroot is : "<<withPre(tmp,3,37);

    return 0;
}
