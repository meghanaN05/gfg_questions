class Solution {
  public:
    string maxSubseq(string& s, int k) {
        // code here
       int n=s.size();
       int a=n-k;
       string ans;
       for(char c:s){
           while(!ans.empty() && ans.back()<c && k>0){
               ans.pop_back();
               k--;
           }
           ans.push_back(c);
       }
       return ans.substr(0,a);
        
    }
};
