/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> preOrder(Node* root) {
    stack<Node*>st;
    vector<int>ans;
    if(root==nullptr) return ans;
        st.push(root);
        while(!st.empty()){
            Node* curr=st.top();
            st.pop();
            ans.push_back(curr->data);
            if(curr->right) st.push(curr->right);
            if(curr->left) st.push(curr->left);
        }
        return ans;
    }
};