// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
    vector<int>ans;
    if(root==NULL) 
    return ans;
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        root=st.top();
        st.pop();
        ans.push_back(root->data);
        if(root->right)
        st.push(root->right);
        if(root->left)
        st.push(root->left);
        
    }
    return ans;
        
    }
};