/*The structure of the class is
class SortedStack{
public:
    stack<int> s;
    void sort();
};
*/

/* The below method sorts the stack s
you are required to complete the below method */
void insertInSortedStack(stack<int>& s, int val) {
    // Base case: insert when stack is empty or val is greater than top
    if (s.empty() || val > s.top()) {
        s.push(val);
        return;
    }
    
    // Otherwise, pop top and recurse
    int temp = s.top();
    s.pop();
    insertInSortedStack(s, val);
    
    // Push the popped element back after insertion
    s.push(temp);
}

void SortedStack::sort() {
    if (s.empty()) return;

    // Pop the top element
    int temp = s.top();
    s.pop();
    
    // Sort the remaining stack
    sort();
    
    // Insert popped element into sorted stack
    insertInSortedStack(s, temp);
}
