class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	   vector<int>result;
	   vector<int>indegree(V,0);
	   for(int i=0;i<V;i++){
	       for(int &v:adj[i]){
	           indegree[v]++;
	       }
	   }
	   queue<int>que;
	    for(int i=0;i<V;i++){
	       if(indegree[i]==0){
	           que.push(i);
	       }
	   }
	   
	   while(!que.empty()){
	       int u=que.front();
	       que.pop();
	       result.push_back(u);
	       for(int &v:adj[u]){
	           indegree[v]--;
	           if(indegree[v]==0){
	               que.push(v);
	           }
	       }
	   }
	   return result;
	}
};