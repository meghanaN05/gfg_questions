class Solution {
  public:
    string minWindow(string &s, string &p) {
        int n = s.size(), m = p.size();
        if(m > n) return "";

        vector<int> freq(26, 0);

        for(char c : p)
            freq[c - 'a']++;

        int count = m;
        int l = 0, start = 0, minLen = INT_MAX;

        for(int r = 0; r < n; r++) {

            if(freq[s[r] - 'a'] > 0)
                count--;

            freq[s[r] - 'a']--;

            while(count == 0) {

                if(r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    start = l;
                }

                freq[s[l] - 'a']++;

                if(freq[s[l] - 'a'] > 0)
                    count++;

                l++;
            }
        }

        if(minLen == INT_MAX) return "";
        return s.substr(start, minLen);
        
    }
};