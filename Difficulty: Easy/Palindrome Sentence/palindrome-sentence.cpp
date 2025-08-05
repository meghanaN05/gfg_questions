

class Solution {
public:
    bool isPalinSent(string &s) {
        string filtered;

        
        for (char c : s) {
            if (isalnum(c)) {
                filtered += tolower(c);
            }
        }

       
        string rev = filtered;
        reverse(rev.begin(), rev.end());

        return filtered == rev;
    }
};
