class Solution {
  public:
    bool sameFreq(string& s) {
        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        map<int, int> cnt;
        for (int f : freq) {
            if (f > 0) cnt[f]++;
        }

        if (cnt.size() == 1) return true;
        if (cnt.size() > 2) return false;

        auto it = cnt.begin();
        int a = it->first, ac = it->second;
        ++it;
        int b = it->first, bc = it->second;

        if ((a == 1 && ac == 1) || (b == 1 && bc == 1)) return true;
        if ((abs(a - b) == 1) && ((a > b && ac == 1) || (b > a && bc == 1))) return true;

        return false;
    }
};
