/* a Node of the doubly linked list
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteAllOccurOfX(Node* head, int x) {
        while(head && head->data == x){
            Node* temp = head;
            head = head->next;
            if(head)
                head->prev = NULL;
            delete temp;
        }
        Node* curr = head;
        while(curr && curr->next){
            if(curr->next->data == x){
                Node* temp = curr->next;
                curr->next = temp->next;
                if(temp->next)
                    temp->next->prev = curr;
                delete temp;
            }
            else{
                curr = curr->next;
            }
        }
        return head;
    }
};