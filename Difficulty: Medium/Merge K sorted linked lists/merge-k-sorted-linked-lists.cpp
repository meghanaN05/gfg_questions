/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
struct compare {
    bool operator()(Node* a, Node* b) {
        return a->data > b->data; 
    }
};

class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        priority_queue<Node*,vector<Node*>,compare>pq;
        for(auto head:arr){
            if(head) pq.push(head);
        }
        Node *dummy=new Node(-1);
        Node *tail=dummy;
        while(!pq.empty()){
            Node *curr=pq.top();
            pq.pop();
            tail->next=curr;
            tail=tail->next;
            if(curr->next) pq.push(curr->next);
        }
        return dummy->next;
    }
};