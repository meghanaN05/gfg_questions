class Solution {
public:
    string reverseWords(string &s) {
        reverse(s.begin(), s.end());
        int i = 0;
        while (i < s.length() && s[i] == '.') {
            i++;
        }
        s = s.substr(i);
        
        string result = "";
        string word = "";
        
        for (int i = 0; i < s.size(); i++) {
            
            if (s[i] == '.') {
                
                if (!word.empty()) {
                    reverse(word.begin(), word.end());
                    
                    if (!result.empty())
                        result += ".";
                    
                    result += word;
                    word = "";
                }
            }
            else {
                word += s[i];
            }
        }
   
        if (!word.empty()) {
            reverse(word.begin(), word.end());
            if (!result.empty())
                result += ".";
            result += word;
        }
        
        return result;
    }
};