class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
        set<int> b(arr2.begin(), arr2.end());
        set<int> c(arr3.begin(), arr3.end());
        set<int> ans_set;

        for (int i = 0; i < arr1.size(); i++) {
            if (b.find(arr1[i]) != b.end() && c.find(arr1[i]) != c.end()) {
                ans_set.insert(arr1[i]);
            }
        }
        vector<int> ans(ans_set.begin(), ans_set.end());

        return ans; 
    }
};
