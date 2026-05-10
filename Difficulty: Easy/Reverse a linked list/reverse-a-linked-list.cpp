/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:

    Node* reverseList(Node* head) {
        if(head==NULL) return NULL;
       Node* prev=NULL;
       Node* temp=head;
       while(temp!=NULL){
           Node* dummy=temp->next;
           temp->next=prev;
           prev=temp;
           temp=dummy;
       }
       return prev;
      
    }
};