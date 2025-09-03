/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node* insertAtPos(Node* head, int p, int x) {
        Node* temp = head;
        int cnt = 0;
        while (cnt < p && temp != nullptr) {
            temp = temp->next;
            cnt++;
        }

        if (temp == nullptr) return head; 

        Node* newNode = new Node(x);

        // insert after temp
        Node* nxt = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = nxt;

        if (nxt != nullptr) {
            nxt->prev = newNode;
        }

        return head;
    }
};
