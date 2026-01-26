class Solution {
  public:
  vector<string>ans;
   void backtrack(int i,string current,string s){
      if(i==s.size()){
          ans.push_back(current);
          return;
      }
       backtrack(i+1,current,s);
      backtrack(i+1,current+s[i],s);
     
  }
    vector<string> AllPossibleStrings(string s) {
      backtrack(0,"",s);
      sort(ans.begin(), ans.end()); 
        return ans;
    }
};