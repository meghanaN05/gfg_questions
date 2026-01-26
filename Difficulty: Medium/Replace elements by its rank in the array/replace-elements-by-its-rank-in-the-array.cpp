// User function Template for C++

class Solution {
  public:
    vector<int> replaceWithRank(vector<int> &arr, int N) {
         int n = arr.size();
        vector<int> res(n);
    priority_queue<pair<int,int>, vector<pair<int,int>>, 
    greater<pair<int,int>>> pq;
    for(int i = 0; i < n; i++) {
        pq.push({arr[i], i});
    }
    int rank = 0;
    int lastNum = INT_MAX;
    while(!pq.empty()) {
        int curr = pq.top().first;
        int index = pq.top().second;
        pq.pop();
        if(lastNum == INT_MAX || curr != lastNum) {
            rank++;
        }
        res[index] = rank;
        lastNum = curr;
    }
    return res;
    }
};
