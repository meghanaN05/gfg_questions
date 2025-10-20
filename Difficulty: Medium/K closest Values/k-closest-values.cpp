/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
public:
   
    void inorder(Node* root, vector<int> &v) {
        if (!root) return;
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }

    
    vector<int> getKClosest(Node* root, double target, int k) {
        vector<int> v;
        inorder(root, v);
        int n = v.size();
        int right = lower_bound(v.begin(), v.end(), target) - v.begin();
        int left = right - 1;
        vector<int> ans;
        while (k--) {
            if (left < 0) ans.push_back(v[right++]);
            else if (right >= n) ans.push_back(v[left--]);
            else {
                double diffL = fabs(v[left] - target);
                double diffR = fabs(v[right] - target);
                if (diffL <= diffR) ans.push_back(v[left--]);
                else ans.push_back(v[right++]);
            }
        }
        return ans;
    }
};
