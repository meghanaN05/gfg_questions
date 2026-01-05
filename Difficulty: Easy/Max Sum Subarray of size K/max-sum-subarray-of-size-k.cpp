class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
            maxi=max(sum,maxi);
        }
       int l=0;
       int r=k;
        while(l<arr.size() && r<arr.size()){
            sum-=arr[l];
            sum+=arr[r];
            maxi=max(maxi,sum);
            l++;
            r++;
        }
        return maxi;
        
    }
};