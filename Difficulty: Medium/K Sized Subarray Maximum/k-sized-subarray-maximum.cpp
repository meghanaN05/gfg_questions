class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        vector<int>ans;
        multiset<int>mt;
        for(int i=0;i<k;i++){
            mt.insert(arr[i]);
        }
        ans.push_back(*mt.rbegin());
        for(int i=k;i<arr.size();i++){
            mt.erase(mt.find(arr[i-k]));
            mt.insert(arr[i]);
            ans.push_back(*mt.rbegin());
        }
        return ans;
        
    }
};