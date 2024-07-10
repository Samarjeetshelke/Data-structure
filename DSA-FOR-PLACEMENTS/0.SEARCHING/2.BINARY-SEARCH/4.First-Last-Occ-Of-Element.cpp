// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int firstOcc(int arr[],int n,int x){
    int s =0,e=n-1;
    int ans=-1;
    
    while(s<=e){
        int mid = (s+e)/2;
        
        if(arr[mid]==x){
            ans = mid;
            e=mid-1;
        }
        else if(x>arr[mid]){
            s=mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

int lastOcc(int arr[],int n,int x){
    int s =0,e=n-1;
    int ans=-1;
    
    while(s<=e){
        int mid = (s+e)/2;
        
        if(arr[mid]==x){
            ans = mid;
            s=mid+1;
        }
        else if(x>arr[mid]){
            s=mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}
int main() {
    int arr[] = {1,2,3,4,5,5,5,5,6,7,8,9,12};
    
    cout<<"The First Occurnce of Element : "<<firstOcc(arr,(sizeof(arr)/sizeof(int)),5);
    cout<<"The Last Occurnce of Element : "<<lastOcc(arr,(sizeof(arr)/sizeof(int)),5);

    return 0;
}

//
class Solution {
public:

    int firstOcc(vector<int>&arr,int x){
      int s=0,e=arr.size()-1;
      int ans =-1;

      while(s<=e){
        int mid =(s+e)/2;

        if(arr[mid]==x){
            ans = mid;
            e = mid-1;
        }
        else if(x>arr[mid]){
            s =mid+ 1;

        }
        else{
            e = mid-1;
        }
      }


      return ans;  
    }

    int lastOcc(vector<int>&arr,int x){
      int s=0,e=arr.size()-1;
      int ans =-1;

      while(s<=e){
        int mid =(s+e)/2;

        if(arr[mid]==x){
            ans = mid;
            s = mid+1;
        }
        else if(x>arr[mid]){
            s =mid+ 1;

        }
        else{
            e = mid-1;
        }
      }


      return ans;  
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;

        ans.push_back(firstOcc(nums,target));
        ans.push_back(lastOcc(nums,target));

        return ans;
    }
};
