// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
          vector<pair<int, int>> ans;
    unordered_map<int, Node *> visited;
    Node *curr = head;
    while (curr != nullptr) {
        int x = target - curr->data;
        if (visited.find(x) != visited.end()) {
            ans.push_back({x, curr->data});
        }
        visited[curr->data] = curr;
        curr = curr->next;
    }
    sort(ans.begin(), ans.end());
    return ans;
    }
};