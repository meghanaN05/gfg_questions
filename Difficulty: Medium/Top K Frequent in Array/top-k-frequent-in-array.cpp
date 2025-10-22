class Solution {
  public:
    vector<int> topKFreq(vector<int> &arr, int k) {
        unordered_map<int,int> freq;
        for (int x : arr)
            freq[x]++;

        vector<pair<int,int>> v(freq.begin(), freq.end());

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            if (a.second == b.second)
                return a.first > b.first; 
            return a.second > b.second;   
        });

        vector<int> top;
        for (int i = 0; i < k && i < v.size(); i++)
            top.push_back(v[i].first);

        return top;
    }
};
