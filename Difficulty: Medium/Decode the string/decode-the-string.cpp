class Solution {
  public:
    string decodedString(string &s) {
        stack<int> countStack;  
        stack<string> stringStack;   
        string curr = "";            
        int num = 0;                

        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            }
            else if (c == '[') {
                countStack.push(num);
                stringStack.push(curr);
                num = 0;
                curr = "";
            }
            else if (c == ']') {
               
                int repeatTimes = countStack.top(); countStack.pop();
                string prev = stringStack.top(); stringStack.pop();
                string temp = "";
                for (int i = 0; i < repeatTimes; i++) 
                temp += curr;
                curr = prev + temp;
            }
            else {
                curr += c;
            }
        }
        return curr;
    }
};
