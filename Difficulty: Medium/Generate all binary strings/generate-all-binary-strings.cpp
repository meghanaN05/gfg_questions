class Solution {
  public:
  void helper(int index, int n, string current, vector<string>& result, char prev) {
      if (current.size() == n) {
          result.push_back(current);
          return;
      }
      
     
      helper(index + 1, n, current + '0', result, '0');
      
      
      if (prev != '1') {
          helper(index + 1, n, current + '1', result, '1');
      }
  }

  vector<string> generateBinaryStrings(int num) {
      vector<string> result;
      helper(0, num, "", result, '0');
      return result;
  }
};
