class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        unordered_set<int> seen;
        set<pair<int, int>> result;

        for (int num : arr) {
            if (seen.count(-num)) {
              
                result.insert({min(num, -num), max(num, -num)});
            }
            seen.insert(num);
        }

       
        vector<vector<int>> output;
        for (auto& p : result) {
            output.push_back({p.first, p.second});
        }
        
        return output;
    }
};
