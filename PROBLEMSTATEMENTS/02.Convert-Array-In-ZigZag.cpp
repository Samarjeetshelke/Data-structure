
https://www.geeksforgeeks.org/convert-array-into-zig-zag-fashion/

class Solution {
  public:
    void zigZag(int n, vector<int> &arr) {
        // code here
        
       /* sort(arr.begin(),arr.end());
        
        int i=1;
        
        while(i<n-1){
            
            arr[i] = arr[i+1];
            
            i+=2;
        }
        *///N*NlogN

      //N
        bool flg = true;
        
        for(int i =0;i<n-1;i++){
            if(flg){
                //expect <
                if(arr[i]>arr[i+1]){
                    swap(arr[i],arr[i+1]);
                }
            }
            else{
                //expect >
                if(arr[i]<arr[i+1]){
                    swap(arr[i],arr[i+1]);
                    
                }
            }
            
            flg=!flg;
            
        }
        
    }
};
