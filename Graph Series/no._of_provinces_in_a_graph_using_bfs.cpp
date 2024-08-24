class Solution {
public:
    // Using bfs
    void bfs(unordered_map<int,vector<int>>&adj,int u,vector<bool>&visited){
       queue<int>que;
       que.push(u);
       visited[u]=true;
       while(!que.empty()){
          int u=que.front();
          que.pop();
          for(int &v:adj[u]){
            if(!visited[v]){
            visited[v]=true;
            que.push(v);
            }
          } 
       }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        unordered_map<int,vector<int>>adj;
        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
            if(isConnected[i][j]==1){
                adj[i].push_back(j);
            }
           }
        }
        
        vector<bool>visited(n,false);
        int count =0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                bfs(adj,i,visited);
                count++;
            }
        }
        return count;
    }
};