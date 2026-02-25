class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        unordered_map<int,int>mp;
        int maxi=0,sum=0;
        for(int i=0;i<arr.size();i++){
         if(arr[i]<=k) sum--;
         else sum++;
         if(sum>0) maxi=i+1;
        else
        {
            if (mp.find(sum - 1) != mp.end()) {
                maxi = max(maxi, i - mp[sum - 1]);
            }
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
            
        }
        return maxi;
        
    }
};