// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};

*/
// Complete this function
Node *deleteHead(Node *head) {
    // Your code here
    if(head==NULL) return head;
    Node * temp=head;
    head=head->next;
   free(temp);
    return head;
    
}
