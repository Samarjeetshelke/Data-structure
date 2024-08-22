// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
#include<vector>
#include<algorithm>


using namespace std;

int main() {
    
    vector<char> ans;
    vector<char> demo = {'(','(',')','(',')',')','(','(',')',')'};
    stack<char>stack;
    
    int i=1;
    ans.push_back(demo[0]);
    while(i<=demo.size()){
        if(demo[i-1]!=demo[i]){
            ans.push_back(demo[i]);
        }
        i++;
        
    }
   
   for(char a:ans){
       cout<<a;
   }
   
    
    return 0;
}



//Easy One
//with noextra place
for(int i=1;i<demo.size();i++){
       if(demo[i-1]==demo[i]){
           demo.erase(demo.begin()+i);
       }
}
