class Solution {
public:
    bool checkBipartiteBFS(vector<int>adj[],int curr,vector<int>&color,int curColor){
        queue<int>que;
        que.push(curr);
        color[curr] = curColor;
        while(!que.empty()){
            int u=que.front();
            que.pop(); 
            for(int &v:adj[u]){
                if(color[v]==color[u]) return false;
                
                if(color[v]==-1){
                    color[v]=1-color[u];
                    que.push(v);
                }
            }
        }
        return true;
        
    }
	bool isBipartite(int V, vector<int>adj[]){
	    vector<int>color(V,-1); // no color is assigned to vertices;
	    // 1 for red
	    // 0 for green
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	            if(checkBipartiteBFS(adj,i,color,1)==false){
	                return false;
	            }
	        }
	    }
	    return true;
	    
	}

};