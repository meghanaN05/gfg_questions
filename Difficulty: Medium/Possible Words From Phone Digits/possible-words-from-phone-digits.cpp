
class Solution {
public:
    vector<string> keypad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };

    void backtrack(vector<int> &arr, int idx, string &current, vector<string> &result) {
        if (idx == arr.size()) {
            result.push_back(current);
            return;
        }
        
        int digit = arr[idx];
        if (digit == 0 || digit == 1) { 
            backtrack(arr, idx + 1, current, result);
            return;
        }
        
        for (char c : keypad[digit]) {
            current.push_back(c);
            backtrack(arr, idx + 1, current, result);
            current.pop_back();
        }
    }

    vector<string> possibleWords(vector<int> &arr) {
        vector<string> result;
        if (arr.empty()) return result;

        string current = "";
        backtrack(arr, 0, current, result);
        return result;
    }
};
