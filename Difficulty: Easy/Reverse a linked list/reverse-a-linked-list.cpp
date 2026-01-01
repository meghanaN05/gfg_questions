/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
       Node *prev=NULL;
       Node *curr=head;
       while(curr){
           Node *next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
       }
        return prev;
    }
};