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
  Node* reverse(Node *head){
      Node* prev=NULL;
      Node* curr=head;
      while(curr){
          Node* next=curr->next;
          curr->next=prev;
        prev=curr;
        curr=next;
      }
      return prev;
  }
    bool isPalindrome(Node *head) {
        //  code here
        if(!head || !head->next) return true;
         Node* slow=head;
         Node* fast=head;
         while(fast && fast->next){
             slow=slow->next;
             fast=fast->next->next;
         }
         Node* fh=head;
         Node* sh=reverse(slow);
         while(sh){
             if(sh->data !=fh->data)
             return false;
             sh=sh->next;
             fh=fh->next;
         }
         return true;
        
    }
};