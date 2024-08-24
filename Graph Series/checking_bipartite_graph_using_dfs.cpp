class Solution {
public:
    bool checkBipartiteDFS(vector<int>adj[],int curr,vector<int>&color,int curColor){

        color[curr] = curColor;
        
        for(int &v: adj[curr]){
            if(color[v]==color[curr]){
                return false;
            }
            if(color[v]==-1){
                if(checkBipartiteDFS(adj,v,color,1-curColor)==false){
                    return false;
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
                // here we started with red as mark
	            if(checkBipartiteDFS(adj,i,color,1)==false){
	                return false;
	            }
	        }
	    }
	    return true;
	    
	}

};