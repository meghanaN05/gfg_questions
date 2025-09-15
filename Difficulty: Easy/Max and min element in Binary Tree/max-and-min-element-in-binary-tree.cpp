/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
  int findMax(Node *root) {
    if (root == NULL) return INT_MIN; 

    int maxi = root->data;

    int left = findMax(root->left);
    int right = findMax(root->right);

    if (left > maxi) maxi = left;
    if (right > maxi) maxi = right;

    return maxi;
}

    int findMin(Node *root) {
        
        // code here
         if (root == NULL) return INT_MAX; 

    int mini = root->data;

    int left = findMin(root->left);
    int right = findMin(root->right);

    if (left <mini) mini = left;
    if (right<mini) mini = right;

    return mini;
        
    }
};