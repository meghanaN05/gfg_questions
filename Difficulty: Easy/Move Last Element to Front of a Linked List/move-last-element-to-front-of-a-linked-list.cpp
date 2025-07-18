// User function Template for C++

class Solution {
  public:
    Node *moveToFront(Node *head) {
        // code here
         if (head == NULL || head->next == NULL) return head;
          Node *temp = head;
        Node *prev = NULL;

      
        while (temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }

        
        prev->next = NULL;

       
        temp->next = head;
        return temp;
    }
};