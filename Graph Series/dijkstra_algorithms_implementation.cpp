class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
       vector<int>result(V,INT_MAX);
       result[S]=0;
       
       pq.push({0,S});
       while(!pq.empty()){
           int d=pq.top().first;
           int node=pq.top().second;
           pq.pop();
           for(auto &vec:adj[node]){
               int adjNode=vec[0];
               int wt=vec[1];
               if(d+wt<result[adjNode]){
                   result[adjNode]=d+wt;
                   pq.push({d+wt,adjNode});
               }
           }
       }
       return result;
       
    }
};