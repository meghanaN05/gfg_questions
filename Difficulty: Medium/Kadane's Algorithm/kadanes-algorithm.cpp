class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxi=arr[0];
        int sum=arr[0];
        for(int i=1;i<arr.size();i++){
           sum=max(arr[i]+sum,arr[i]);
           maxi=max(sum,maxi);
        }
        return maxi;
    }
};