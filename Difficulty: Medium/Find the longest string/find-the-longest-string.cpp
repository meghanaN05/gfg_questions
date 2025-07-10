#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct TrieNode {
    TrieNode* children[26];
    bool isWord;
    TrieNode() {
        fill(begin(children), end(children), nullptr);
        isWord = false;
    }
};

class Solution {
public:
    TrieNode* root = new TrieNode();
    string result = "";

    void insert(const string& word) {
        TrieNode* node = root;
        for (char c : word) {
            int idx = c - 'a';
            if (!node->children[idx])
                node->children[idx] = new TrieNode();
            node = node->children[idx];
        }
        node->isWord = true;
    }

    void dfs(TrieNode* node, string& path) {
        if (!node->isWord && node != root)
            return;

        if (path.length() > result.length() || (path.length() == result.length() && path < result))
            result = path;

        for (int i = 0; i < 26; ++i) {
            if (node->children[i]) {
                path.push_back('a' + i);
                dfs(node->children[i], path);
                path.pop_back();
            }
        }
    }

    string longestString(vector<string>& words) {
        for (const string& word : words)
            insert(word);

        string path = "";
        dfs(root, path);
        return result;
    }
};


