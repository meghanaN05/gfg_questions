class Solution {
  public:
    vector<string> graycode(int n) {
        // code here
        vector<string>ans;
        int total = 1 << n; 
  for (int i = 0; i < total; i++)
  {
    int gray = i ^ (i >> 1);
    string res="";
    for (int j = n - 1; j >= 0; j--)
    {
        
      res+=to_string((gray >> j) & 1);
    }
      ans.push_back(res);
  }
        return ans;
    }
};