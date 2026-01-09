class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        int l=0;
        long long ans=0;
       unordered_map<int,int>freq;
       for(int i=0;i<arr.size();i++){
           freq[arr[i]]++;
            while (freq.size() > k) {
                freq[arr[l]]--;
                if (freq[arr[l]] == 0)
                    freq.erase(arr[l]);
                l++;
            }
           ans+=i-l+1;
       }
       return ans;
    }
};