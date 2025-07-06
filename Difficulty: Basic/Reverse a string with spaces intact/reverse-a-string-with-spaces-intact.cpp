class Solution {
  public:
    string reverseWithSpacesIntact(string s) {
        int n = s.size();
        string result(n, ' '); 
        vector<char> letters;

       
        for (char c : s) {
            if (c != ' ') {
                letters.push_back(c);
            }
        }

     
        reverse(letters.begin(), letters.end());

       
        int j = 0; 
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                result[i] = letters[j++];
            }
        }

        return result;
    }
};
