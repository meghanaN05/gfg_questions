class SpecialStack {
  public:
  stack<int>st,s;
    SpecialStack() {
        // Define Stack
    }

    void push(int x) {
        s.push(x);
        if(st.empty() || x<=st.top()) st.push(x);
    }

    void pop() {
        // Remove the top element from the Stack
        if(st.top()==s.top()) st.pop();
        s.pop();
    }

    int peek() {
        // Returns top element of the Stack
        if(s.empty()) return -1;
        if(!s.empty()) return s.top();
    }

    bool isEmpty() {
        // Check if stack is empty
        return s.empty();
    }

    int getMin() {
        // Finds minimum element of Stack
         if(st.empty()) return -1;
        if(!st.empty()) return st.top();
    }
};