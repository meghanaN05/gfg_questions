/*  Structure of a Binary Tree

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {
        // Your code here
        if (!root) return 0;

        queue<Node*> q;
        q.push(root);

        int maxWidth = 0;

        while (!q.empty()) {
            int levelSize = q.size(); 
            maxWidth = max(maxWidth, levelSize);

            for (int i = 0; i < levelSize; i++) {
                Node* node = q.front();
                q.pop();

                if (node->left)  q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }

        return maxWidth;
    }
};