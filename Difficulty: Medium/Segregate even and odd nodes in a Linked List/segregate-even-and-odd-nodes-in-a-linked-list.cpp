// User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* divide(Node* head) {
        if (!head) return head;
        Node* evenDummy = new Node(-1);
        Node* oddDummy  = new Node(-1);
        Node* even = evenDummy;
        Node* odd  = oddDummy;
        Node* curr = head;
        while (curr) {
            if (curr->data % 2 == 0) {
                even->next = curr;
                even = even->next;
            } else {
                odd->next = curr;
                odd = odd->next;
            }
            curr = curr->next;
        }
        even->next = oddDummy->next;
        odd->next = NULL;
        Node* newHead = evenDummy->next;
        delete evenDummy;
        delete oddDummy;

        return newHead;
    }
};
