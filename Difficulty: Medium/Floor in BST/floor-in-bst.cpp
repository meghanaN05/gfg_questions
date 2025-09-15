// Function to search a node in BST.
class Solution {

  public:
    int floor(Node* root, int x) {
        // Code here
        int ceil=-1;
         while (root != NULL) {
        if(root->data==x){
            ceil=root->data;
            return ceil;
        }
        if(x<root->data){
            root=root->left;
        }
        else{
            ceil=root->data;
            root=root->right;
            
        }
         }
        return ceil;
    }
};