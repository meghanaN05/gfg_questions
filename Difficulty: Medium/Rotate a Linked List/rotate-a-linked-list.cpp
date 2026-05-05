/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        if(head == NULL || head->next == NULL || k == 0) 
            return head;
        int size = 1;
        Node* temp = head;
        while(temp->next != NULL){
            size++;
            temp = temp->next;
        }

        k = k % size;
        if(k == 0) return head;
        Node* curr = head;
        for(int i = 1; i < k; i++){
            curr = curr->next;
        }
        Node* newHead = curr->next;
        curr->next = NULL;
        temp->next = head;
        return newHead;
    }
    
};