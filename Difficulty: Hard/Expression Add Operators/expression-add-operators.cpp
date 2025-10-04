class Solution {
  public:
  vector<string> ans;

    void backtrack(string &s, int target, int pos, long curVal, long prevNum, string expr) {
        if (pos == s.size()) {
            if (curVal == target) ans.push_back(expr);
            return;
        }

        for (int i = pos; i < s.size(); i++) {
            // Skip numbers with leading zeros
            if (i != pos && s[pos] == '0') break;

            string numStr = s.substr(pos, i - pos + 1);
            long num = stol(numStr);

            if (pos == 0) {
               
                backtrack(s, target, i + 1, num, num, numStr);
            } else {
                // Addition
                backtrack(s, target, i + 1, curVal + num, num, expr + "+" + numStr);
                // Subtraction
                backtrack(s, target, i + 1, curVal - num, -num, expr + "-" + numStr);
                // Multiplication
                backtrack(s, target, i + 1, curVal - prevNum + prevNum * num, prevNum * num, expr + "*" + numStr);
            }
        }
    }
    vector<string> findExpr(string &s, int target) {
         backtrack(s, target, 0, 0, 0, "");
        return ans;
        
    }
};