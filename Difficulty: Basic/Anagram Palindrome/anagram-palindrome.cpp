class Solution {
  public:
    bool canFormPalindrome(string &s) {
      int cnt=0;
      unordered_map<char,int>mp;
      for(int i=0;i<s.size();i++){
          mp[s[i]]++;
      }
      for(auto it:mp){
          if(it.second%2==0){
              continue;
          }
          else{
              cnt++;
          }
          if(cnt>1) return false;
      }
        return true;
    }
};