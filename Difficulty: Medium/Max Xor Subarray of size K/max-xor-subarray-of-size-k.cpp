class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
       int xori = 0;
       for(int i = 0; i < k; i++){
           xori ^= arr[i];
       }
       int maxi = xori;
       int l = 0;
       for(int i = k; i < arr.size(); i++){
           xori ^= arr[l];   
           xori ^= arr[i];
           maxi = max(maxi, xori);
           l++;
       }
       return maxi;
    }
};