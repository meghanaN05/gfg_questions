/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int x) {
        Node* successor = NULL;
        Node* predecessor = NULL;

        while (root != NULL) {
            if (root->data == x) {
                if (root->left) {
                    Node* t = root->left;
                    while (t->right) t = t->right;
                    predecessor = t;
                }
                if (root->right) {
                    Node* t = root->right;
                    while (t->left) t = t->left;
                    successor = t;
                }
                break; 
            } else if (root->data < x) {
                
                predecessor = root;
                root = root->right;
            } else { 
                successor = root;
                root = root->left;
            }
        }

        return {predecessor, successor};
    }
};

