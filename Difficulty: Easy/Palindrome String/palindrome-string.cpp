class Solution {
  public:
    bool isPalindrome(string& s) {
       string t=s;
       reverse(s.begin(),s.end());
       return t==s;
        
    }
};