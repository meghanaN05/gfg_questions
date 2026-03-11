
class Solution {
  public:
    int maxLength(string& s) {
        // code here
        stack<int>st;
        stack<int>idx;
        idx.push(-1);
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                idx.push(i);
                
            }
            else{
                if(!st.empty()){
                    st.pop();
                     idx.pop();
                    ans=max(ans,i-idx.top());
                   
                }
                else{
                    idx.push(i);
                }
            }
        }
        return ans;
    }
};