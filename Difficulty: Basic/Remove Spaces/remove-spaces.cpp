class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' ') continue;
            res+=s[i];
        }
        return res;
    }
};