class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
     unordered_map<int,int>mp;
     for(int i=0;i<arr.size();i++){
         mp[arr[i]]++;
     }
     vector<int>ans;
     for(auto it:mp){
         if(it.second==1)
         ans.push_back(it.first);
     }
     sort(ans.begin(),ans.end());
     return ans;
     
    
    }
};