class Solution {
  public:
    void rotateDeque(deque<int>& dq, int type, int k) {
        if (dq.empty()) return;  
        k %= dq.size();          

        if (type == 1) {
            while (k--) {
                int val = dq.back();
                dq.pop_back();
                dq.push_front(val);
            }
        } 
        else if (type == 2) {
            while (k--) {
                int val = dq.front();
                dq.pop_front();
                dq.push_back(val);
            }
        }
    }
};
