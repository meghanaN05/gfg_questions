class Solution {
public:
    long long atMostK(string &s, int k) {
        if (k < 0) return 0;

        int freq[26] = {0};
        int i = 0, distinct = 0;
        long long ans = 0;

        for (int j = 0; j < s.size(); j++) {
            if (freq[s[j] - 'a']++ == 0)
                distinct++;

            while (distinct > k) {
                if (--freq[s[i] - 'a'] == 0)
                    distinct--;
                i++;
            }

            ans += (j - i + 1);
        }
        return ans;
    }

    long long countSubstr(string &s, int k) {
        return atMostK(s, k) - atMostK(s, k - 1);
    }
};
