class Solution {
  public:
  vector<string>ans;
  void generate(int n,string s){
      if(s.size()==n){
          ans.push_back(s);
          return;
      }
      generate(n,s+"0");
      generate(n,s+"1");
  }
    vector<string> binstr(int n) {
       generate(n,"");
       return ans;
        
    }
};