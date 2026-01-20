class Solution {
  public:
    string s = "";
    stack<char> undoStack;
    stack<char> redoStack;

    void append(char x) {
        s += x;
        undoStack.push(x);
        while (!redoStack.empty()) redoStack.pop();
    }

    void undo() {
        if (s.empty()) return;
        char c = s.back();
        s.pop_back();
        redoStack.push(c);
    }

    void redo() {
        if (redoStack.empty()) return;

        char c = redoStack.top();
        redoStack.pop();
        s += c;
    }

    string read() {
        return s;
    }
};
