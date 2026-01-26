// User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution {
public:
    vector<string> ans;
    void backtrack(int open, int close, int n, string current) {
        if (current.size() == 2 * n) {
            ans.push_back(current);
            return;
        }
        if (open < n) {
            backtrack(open + 1, close, n, current + "(");
        }

        if (close < open) {
            backtrack(open, close + 1, n, current + ")");
        }
    }

    vector<string> generateParentheses(int n) {
        backtrack(0, 0, n/2, "");
        return ans;
    }
};
