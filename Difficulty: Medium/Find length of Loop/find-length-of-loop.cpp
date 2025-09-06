/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        if (!head || !head->next) return 0;

        Node *slow = head, *fast = head;

        // Step 1: Detect cycle
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Step 2: Count cycle length
                int count = 1;
                Node* temp = slow->next;
                while (temp != slow) {
                    count++;
                    temp = temp->next;
                }
                return count;
            }
        }
        // Step 3: No cycle
        return 0;

    }
};