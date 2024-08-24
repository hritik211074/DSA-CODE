class Solution {
  public:
      bool isCycleBFS(vector<int> adj[], int u, vector<bool> &visited) {
       queue<pair<int,int>>que;
       que.push({u,-1});
       visited[u]=true;
       while(!que.empty()){
           pair<int,int>p=que.front();
           que.pop();
           int source=p.first;
           int parent=p.second;
           for(int &v:adj[source]){
               if(!visited[v]){
                   visited[v]=true;
                   que.push({v,source});
               }
               else if(v!=parent){
                   return true;
               }
           }
       }
       return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);
        for (int i = 0; i < V; i++) {

                if (!visited[i] && isCycleBFS(adj, i, visited)) {
                    return true;
                
            }
        }
        return false;
    }
};