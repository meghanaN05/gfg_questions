/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        int size=0;
        Node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            size++;
        }
        int index=size-k+1;
        Node* curr=head;
        int cnt=0;
        while(curr!=NULL){
            cnt++;
            if(cnt==index){
                return curr->data;
            }
            curr=curr->next;
        }
        return -1;
    }
};