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

vector<int> displayList(Node *head) {
    // Your code here
    Node *temp=head;
    vector<int>ans;
    while(temp){
       ans.push_back(temp->data);
        temp=temp->next;
    }
    return ans;
}
