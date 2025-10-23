class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // code here
       priority_queue<pair<long long, int>> pq;
  int n=points.size();
    for(int i = 0; i < n; i++) {
        long long dist = 1LL * points[i][0] * points[i][0] + 1LL * points[i][1] * points[i][1];
        pq.push({dist, i});
        if(pq.size() > k) pq.pop();  
    }

    vector<vector<int>> ans;
    while(!pq.empty()) {
        ans.push_back(points[pq.top().second]);
        pq.pop();
    }
        return ans;
    }
};