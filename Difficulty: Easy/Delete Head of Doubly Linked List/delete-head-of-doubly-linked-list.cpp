// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/
Node *deleteHead(Node *head) {
   if(head==NULL || head->next==NULL){
       return NULL;
   }
   Node* temp=head;
   head=head->next;
   head->prev=nullptr;
   temp->next=nullptr;
   delete temp;
   return head;
}
