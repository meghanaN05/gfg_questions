/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class myStack {
      Node *top;
      int count;
  public:
    myStack() {
        // Initialize your data members
        top=NULL;
        count=0;
        
    }

    bool isEmpty() {
        // check if the stack is empty
        if(top==NULL) return true;
        return false;
    }

    void push(int x) {
        // Adds an element x at the top of the stack
        Node *temp=new Node(x);
        temp->next=top;
        top=temp;
        count++;
    }

    void pop() {
        // Removes the top element of the stack
        Node* temp = top;
         top=top->next;
         int val=temp->data;
         count--;
         delete temp;
        
    }

    int peek() {
        // Returns the top element of the stack
        // If stack is empty, return -1
         if (top == NULL) {
            return -1;
        }
         Node* temp = top;
         return temp->data;
        
    }

    int size() {
        // Returns the current size of the stack.
        return count;
    }
};