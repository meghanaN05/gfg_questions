// User function template for C++
class Solution {
  public:
    void immediateSmaller(vector<int>& arr) {
        //  code here
        stack<int>st;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1])
            st.push(arr[i+1]);
            else
            st.push(-1);
        }
        st.push(-1);
        for(int i=arr.size()-1;i>=0;i--){
            arr[i]=st.top();
            st.pop();
        }
       
    }
};