/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // code here
        Node *prev=NULL;
        Node *temp=head;
        while(temp!=NULL){
            Node *NextNode=temp->next;
            temp->next=prev;
            prev=temp;
            temp=NextNode;
        }
        return prev;
    }
};