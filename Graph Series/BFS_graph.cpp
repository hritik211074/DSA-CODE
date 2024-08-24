class Solution {
  public:
    void BFS(vector<int> adj[], int u, vector<int>& result, vector<bool>& visited) {
        queue<int> q;
        q.push(u);
        visited[u] = true;
        result.push_back(u);
        
        while (!q.empty()) {
            int ele = q.front();
            q.pop();
            
            for (int v = 0; v < adj[ele].size(); v++) {
                if (!visited[adj[ele][v]]) {
                    q.push(adj[ele][v]);
                    visited[adj[ele][v]] = true;
                    result.push_back(adj[ele][v]);
                }
            }
        }
    }

    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> result;
        vector<bool> visited(V, false);
        
        // Start BFS from the node 0
        BFS(adj, 0, result, visited);
        
        return result;
    }
};