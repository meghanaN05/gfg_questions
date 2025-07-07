class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &nums) {
        // code here
        int n = nums.size();
    vector<int> res(n, -1);
    stack<int> st;

    for (int i = 2 * n - 1; i >= 0; --i) {
        int curr = nums[i % n];
        
        while (!st.empty() && st.top() <= curr) {
            st.pop();
        }

        if (i < n) {
            if (!st.empty()) {
                res[i] = st.top();
            }
        }

        st.push(curr);
    }

    return res;
    }
};