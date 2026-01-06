class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int n=arr.size();
        int xr=0;
        for(int i=0;i<k;i++){
             xr ^= arr[i];
        }
         int maxor=0;
        for(int i=k;i<n;i++){
            xr ^= arr[i - k];  
            xr ^= arr[i]; 
            maxor=max(xr,maxor);
        }
        
    }
    return maxor;
};
