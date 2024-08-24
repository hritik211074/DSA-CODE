class Solution {
  public:
  void DFS(unordered_map<int,vector<int>>&mp,int u,vector<int>&result,vector<bool>&visited){
      if(visited[u]==true) return;
      
      visited[u]=true;
      result.push_back(u);
      for(int v=0;v<mp[u].size();v++){
          if(!visited[mp[u][v]]){
              DFS(mp,mp[u][v],result,visited);
          }
      }
  }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        unordered_map<int,vector<int>>mp;
        for(int u=0;u<V;u++){
            for(int v=0;v<adj[u].size();v++){
                mp[u].push_back(adj[u][v]);
            }
        }
        vector<bool>visited(V,false);
        vector<int>result;
        DFS(mp,0,result,visited);
        return result;
    }
};