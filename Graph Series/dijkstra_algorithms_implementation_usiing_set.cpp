
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int>result(V,INT_MAX);
        result[S]=0;
        set<pair<int,int>>st;
        st.insert({0,S});
        while(!st.empty()){
            auto &it =*st.begin();
            int dis=it.first;
            int node=it.second;
            st.erase(it);
            for(auto &vec:adj[node]){
               int adjNode=vec[0];
               int wt=vec[1];
               if(dis+wt<result[adjNode]){
                   if(result[adjNode]!=INT_MAX){
                      st.erase({result[adjNode],adjNode});
                   }
                  
                   result[adjNode]=dis+wt;
                   st.insert({(dis+wt),adjNode});
               }
            }
        }
        return result;
    }
};