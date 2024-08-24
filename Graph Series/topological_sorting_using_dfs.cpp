class Solution
{
	public:
	void dfs(vector<int> adj[],int u,stack<int>&st,vector<bool>&visited){
	    visited[u]=true;
	    for(int &v:adj[u]){
	        if(!visited[v]){
	            // mere bachho ko dalo(v)
	            dfs(adj,v,st,visited);
	        }
	    }
	    
	    // after hame dalo (u)
	    st.push(u);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<bool>visited(V,false);
	    stack<int>st;
	    vector<int>result;
	    for(int i=0;i<V;i++){
	        if(!visited[i]){
	        dfs(adj,i,st,visited);
	        }
	    }
	    while(!st.empty()){
	        result.push_back(st.top());
	        st.pop();
	    }
	    return result;
	}
};