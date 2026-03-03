// User function Template for C++

class Solution {
  public:
    int getSingle(vector<int> &arr) {
         unordered_map<int,int>mp;
     for(int i=0;i<arr.size();i++){
         mp[arr[i]]++;
     }
     for(auto it:mp){
         if(it.second==1)
         return it.first;
     }
     return 0;
        
    }
};