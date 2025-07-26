class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        int n=arr.size();
        // sort(arr.begin(),arr.end());
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        
    vector<int>ans;
   for(auto &p:freq){
       if(p.second>floor(n/3.0)){
           ans.push_back(p.first);
       }
   }
     sort(ans.begin(),ans.end());
     return ans;
    }
    
};