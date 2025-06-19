class Solution {
  public:
    string caseSort(string& s) {
        vector<char> upper, lower;

     
        for (char ch : s) {
            if (isupper(ch))
                upper.push_back(ch);
            else
                lower.push_back(ch);
        }

       
        sort(upper.begin(), upper.end());
        sort(lower.begin(), lower.end());

        
        int u = 0, l = 0;
        string result = s;

        for (int i = 0; i < s.size(); ++i) {
            if (isupper(s[i]))
                result[i] = upper[u++];
            else
                result[i] = lower[l++];
        }

        return result;
    }
};
