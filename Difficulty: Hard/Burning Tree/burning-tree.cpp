class Solution {
public:
    void mapParents(Node* root, unordered_map<Node*, Node*>& parent) {
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            Node* cur = q.front(); q.pop();
            if (cur->left) {
                parent[cur->left] = cur;
                q.push(cur->left);
            }
            if (cur->right) {
                parent[cur->right] = cur;
                q.push(cur->right);
            }
        }
    }

    Node* findTarget(Node* root, int target) {
        if (!root) return NULL;
        if (root->data == target) return root;
        Node* left = findTarget(root->left, target);
        if (left) return left;
        return findTarget(root->right, target);
    }

    int minTime(Node* root, int target) {
        unordered_map<Node*, Node*> parent;
        unordered_map<Node*, bool> visited;

        // Step 1: Map parents for each node
        mapParents(root, parent);

        // Step 2: Find target node
        Node* targetNode = findTarget(root, target);

       
        queue<Node*> q;
        q.push(targetNode);
        visited[targetNode] = true;

        int time = 0;
        while (!q.empty()) {
            int size = q.size();
            bool burnedSomething = false; 

            for (int i = 0; i < size; ++i) {
                Node* node = q.front(); q.pop();

                if (node->left && !visited[node->left]) {
                    visited[node->left] = true;
                    q.push(node->left);
                    burnedSomething = true;
                }
                if (node->right && !visited[node->right]) {
                    visited[node->right] = true;
                    q.push(node->right);
                    burnedSomething = true;
                }
                if (parent.count(node) && !visited[parent[node]]) {
                    visited[parent[node]] = true;
                    q.push(parent[node]);
                    burnedSomething = true;
                }
            }

            if (burnedSomething) time++;
        }

        return time;
    }
};
