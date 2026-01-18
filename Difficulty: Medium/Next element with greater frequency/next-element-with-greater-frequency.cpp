class Solution {
  public:
    vector<int> nextFreqGreater(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        stack<int> st; 
        vector<int>res(arr.size(),-1);
        for (int i = arr.size() - 1; i >= 0; --i) {
            while (!st.empty() && mp[arr[st.top()]] <= mp[arr[i]]) {
                st.pop();
            }
            if (!st.empty()) {
                res[i] = arr[st.top()];
            }
            st.push(i);
        }

        return res;
        
    }
    
};
