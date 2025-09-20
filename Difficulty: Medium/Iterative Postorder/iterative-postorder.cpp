class Solution {
public:
    vector<int> postOrder(Node* root) {
        vector<int> ans;
        if (!root) return ans;

        stack<Node*> st;
        Node* curr = root;
        Node* lastVisited = nullptr; // keeps track of last visited node

        while (curr != nullptr || !st.empty()) {
            
            while (curr != nullptr) {
                st.push(curr);
                curr = curr->left;
            }

            Node* peekNode = st.top();

            // If right child exists and not yet visited, move to right
            if (peekNode->right != nullptr && lastVisited != peekNode->right) {
                curr = peekNode->right;
            } else {
               
                ans.push_back(peekNode->data);
                lastVisited = peekNode;
                st.pop();
            }
        }

        return ans;
    }
};
