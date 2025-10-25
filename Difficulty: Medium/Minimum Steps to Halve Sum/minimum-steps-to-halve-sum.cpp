class Solution {
public:
    int minOperations(vector<int>& arr) {
        double sum = accumulate(arr.begin(), arr.end(), 0.0);
        double target = sum / 2.0;
        
        priority_queue<double> pq(arr.begin(), arr.end());
        int op = 0;
        
        while (sum > target) {
            double x = pq.top();
            pq.pop();
            double half = x / 2.0;
            sum -= half;    
            pq.push(half);
            op++;
        }
        
        return op;
    }
};
