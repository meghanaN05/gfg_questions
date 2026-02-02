/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    bool isIdentical(Node* p, Node* q) {
                if(p==NULL || q==NULL) return (p==q);
        return (p->data==q->data) && isIdentical(p->left,q->left) && isIdentical(p->right,q->right);

        
    }
};