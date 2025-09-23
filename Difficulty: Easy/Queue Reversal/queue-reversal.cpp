class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        stack<int>st;
       while(!q.empty()){
            int it=q.front();
            q.pop();
            st.push(it);
        }
           while(!st.empty()){
             int it=st.top();
             st.pop();
             q.push(it);
         }
        
    }
};