class Solution {
  public:
  
    int floorDiv(int a, int b) {
        int q = a / b;
        int r = a % b;
        if (r != 0 && ((a < 0) ^ (b < 0))) {
            q--; 
        }
        return q;
    }

    int evaluatePostfix(vector<string>& arr) {
        stack<int> st;

        for (string token : arr) {
            if (token == "+" || token == "-" || token == "*" || token == "/" || token == "^") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                int res = 0;

                if (token == "+") res = a + b;
                else if (token == "-") res = a - b;
                else if (token == "*") res = a * b;
                else if (token == "/") res = floorDiv(a, b);
                else if (token == "^") res = pow(a, b);

                st.push(res);
            } else {
                st.push(stoi(token)); // convert string → int
            }
        }

        return st.top();
    }
};
