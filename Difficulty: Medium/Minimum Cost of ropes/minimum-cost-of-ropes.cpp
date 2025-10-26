class Solution {
  public:
    int minCost(vector<int>& arr) {
       priority_queue<int, vector<int>,greater<int>> pq(arr.begin(),arr.end());
       int ans=0;
       while(pq.size()>1){
           int t=pq.top();
           pq.pop();
           int r=pq.top();
           pq.pop();
           ans+=t+r;
           pq.push(t+r);
           
       }
         return ans;
       
        
    }
};