vector<string> extractIntegerWords(string s) {
    // code here
     vector<string> result;
    string temp = "";

    for (char ch : s) {
        if (isdigit(ch)) {
            temp += ch;
        } else {
            if (!temp.empty()) {
                result.push_back(temp);
                temp = "";
            }
        }
    }

    
    if (!temp.empty()) {
        result.push_back(temp);
    }

    return result;

}