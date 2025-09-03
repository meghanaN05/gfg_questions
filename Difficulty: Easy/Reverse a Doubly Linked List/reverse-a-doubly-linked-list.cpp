/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        Node *prev = NULL;
        Node *current = head;
        while (current != NULL) {
            prev = current->prev;
            current->prev = current->next;
            current->next = prev;
            current = current->prev;
        }
        return prev->prev;
    }
};
