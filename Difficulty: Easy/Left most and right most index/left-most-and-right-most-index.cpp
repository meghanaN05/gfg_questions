class Solution {
  public:
    pair<long, long> indexes(vector<long long>nums, long long x) {
        // code here
            auto lb = lower_bound(nums.begin(), nums.end(), x);
        auto ub = upper_bound(nums.begin(), nums.end(), x);

       
        if (lb == nums.end() || *lb != x) return {-1, -1};

        int first = lb - nums.begin();
        int last = ub - nums.begin() - 1;

        return {first, last};
    }
};