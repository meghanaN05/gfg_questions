class Solution {
public:
    int subarraysWithKDistinct(vector<int>& arr, int k) {
           unordered_map<int,int> mp;
        int l = 0, count = 0;
        for(int r = 0; r < arr.size(); r++){
            mp[arr[r]]++;

            while(mp.size() > k){
                mp[arr[l]]--;
                if(mp[arr[l]] == 0)
                    mp.erase(arr[l]);
                l++;
            }

            count += (r - l + 1);
        }

        return count;
    }
    
    int exactlyK(vector<int>& arr, int k){
      return subarraysWithKDistinct(arr, k) - subarraysWithKDistinct(arr, k-1);
    

    }
};