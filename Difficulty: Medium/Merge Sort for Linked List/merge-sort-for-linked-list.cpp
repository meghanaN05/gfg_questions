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

Node* merge(Node* l1, Node* l2) {
    Node dummy(0); 
    Node* tail = &dummy;

    while (l1 && l2) {
        if (l1->data <= l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1) tail->next = l1;
    else tail->next = l2;

    return dummy.next;  // ✅ fixed
}

Node* getMiddle(Node* head) {
    if (!head) return head;

    Node* slow = head;
    Node* fast = head->next;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

class Solution {
  public:
    Node* mergeSort(Node* head) {
        if (!head || !head->next) return head;  

        Node* mid = getMiddle(head); 
        Node* righthead = mid->next; 
        mid->next = NULL;

        Node* left = mergeSort(head);      
        Node* right = mergeSort(righthead);

        return merge(left, right);
    }
};
