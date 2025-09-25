class Solution {
public:
    vector<string> generateBinary(int n) {
        vector<string> ans;
        for (int i = 1; i <= n; i++) {
            int num = i;
            string s = "";
            while (num > 0) {
                int remainder = num % 2;
                s += to_string(remainder);
                num /= 2;
            }
            reverse(s.begin(), s.end());
            ans.push_back(s);
        }
        return ans;
    }
};
