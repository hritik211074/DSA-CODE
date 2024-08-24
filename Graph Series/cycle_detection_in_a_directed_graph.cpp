
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
	   vector<int>indegree(V,0);
	   for(int i=0;i<V;i++){
	       for(int &v:adj[i]){
	           indegree[v]++;
	       }
	   }
	   int count=0;
	   queue<int>que;
	    for(int i=0;i<V;i++){
	       if(indegree[i]==0){
	           que.push(i);
	           count++;
	       }
	   }
	  
	   while(!que.empty()){
	       int u=que.front();
	       que.pop();
	       for(int &v:adj[u]){
	           indegree[v]--;
	           if(indegree[v]==0){
	               que.push(v);
	               count++;
	           }
	       }
	   }
	   return (count!=V);
    }
};
