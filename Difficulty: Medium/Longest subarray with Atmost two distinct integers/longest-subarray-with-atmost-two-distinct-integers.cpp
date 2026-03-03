class Solution {
  public:
    int totalElements(vector<int> &arr) {
        unordered_map<int,int> mp;
        int l = 0;
        int maxi = 0;
        for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
            while(mp.size() > 2) {
                mp[arr[l]]--;
                if(mp[arr[l]] == 0)
                    mp.erase(arr[l]);   
                l++;                   
            }
            maxi = max(maxi, i - l + 1);
        }
        return maxi;
    }
};