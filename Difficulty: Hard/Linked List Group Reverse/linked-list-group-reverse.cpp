/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        if (k == 1 || head == NULL) return head;

        int cnt = 0;
        Node* temp = head;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }

        Node* dummy = new Node(0);
        dummy->next = head;
        Node* prev = dummy;
        Node* curr;
        Node* nex;
        while (cnt >= k) {
            curr = prev->next;
            nex = curr->next;
            for (int i = 1; i < k; i++) {
                curr->next = nex->next;
                nex->next = prev->next;
                prev->next = nex;
                nex = curr->next;
            }
            prev = curr;
            cnt -= k;
        }

        // Reverse leftover (<k)
        if (cnt > 0) {
            curr = prev->next;
            nex = curr->next;
            for (int i = 1; i < cnt; i++) {  
                curr->next = nex->next;
                nex->next = prev->next;
                prev->next = nex;
                nex = curr->next;
            }
        }

        return dummy->next;
    }
};
