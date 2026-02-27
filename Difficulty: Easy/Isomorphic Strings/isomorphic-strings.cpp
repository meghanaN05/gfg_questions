class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        if(s1.size() != s2.size()) return false;
        unordered_map<char,char> mp;
        unordered_set<char> used;   
        for(int i = 0; i < s1.size(); i++){
            if(mp.find(s1[i]) == mp.end()){
                if(used.count(s2[i])) return false;
                mp[s1[i]] = s2[i];
                used.insert(s2[i]);
            }
            else{
                if(mp[s1[i]] != s2[i]) return false;
            }
        }
        
        return true;
    }
};