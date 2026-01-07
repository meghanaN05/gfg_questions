class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int>mp;
         int l=0;
         for(int i=0;i<k;i++){
             mp[arr[i]]++;
         }
         vector<int>ans;
         ans.push_back(mp.size());
         for(int r=k;r<arr.size();r++){
             mp[arr[l]]--;
             if(mp[arr[l]]==0){
                 mp.erase(arr[l]);
             }
             l++;
             mp[arr[r]]++;
             ans.push_back(mp.size());
         }
         return ans;
    }
};