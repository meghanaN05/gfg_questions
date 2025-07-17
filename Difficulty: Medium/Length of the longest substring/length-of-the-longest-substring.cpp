class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        // code
          int ans=0;
          int l = 0;
        int maxi = -1;
        unordered_map<char, int> freq;

        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;

            while (freq[s[i]] > 1) {
                freq[s[l]]--;
                if (freq[s[l]] == 0)
                    freq.erase(s[l]);
                l++;
            }
           
            
             ans=max(i-l+1,ans);
        }

        return ans;
    }
};