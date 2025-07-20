/* _push function to insert elements of array to
   stack
*/
class Solution {
public:
    stack<int> push(vector<int> &arr) {
        // return a stack with all elements of arr inserted in it
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            st.push(arr[i]);
        }
        return st;
    }

    /* _pop function to print elements of the stack
       remove as well
    */
    void pop(stack<int> s) {
        // print top and pop for each element until it becomes empty
        while(!s.empty()){
                   cout<<s.top()<<" ";
             s.pop();
 
        }
    }
};