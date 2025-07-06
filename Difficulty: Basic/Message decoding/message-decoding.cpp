bool decode(string S) {
    // your code here
    string t="hello";
    int ta=0;
    for(int i=0;i<S.size();i++){
        if((S[i]) == t[ta]){
            ta++;
        }
        if(ta==t.size()) return true;
    }
    return false;
}