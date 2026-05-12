/*
class Node {
public:
    int data;  // value stored in node
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
}
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
       if(!head) return NULL;
       Node* curr=head;
       while(curr && curr->next){
           if(curr->data==curr->next->data){
           Node* temp=curr->next;
           curr->next=temp->next;
           if(temp->next)
           temp->next->prev = curr;
           delete temp;
           }
           else{
               curr=curr->next;
           }
       }
       return head;
    }
};