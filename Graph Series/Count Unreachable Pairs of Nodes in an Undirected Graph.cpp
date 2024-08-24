class Solution {
public:
    vector<int> parent;
    vector<int> rank;

    int find (int x) {
    if (x == parent[x]) 
    return x;

    return parent[x] = find(parent[x]);
    }
    void Union (int x, int y) {
    int x_parent = find(x);
    int y_parent = find(y);

    if (x_parent == y_parent) 
    return;

    if(rank[x_parent] > rank[y_parent]) {

    parent[y_parent] = x_parent;

    } else if(rank[x_parent] < rank[y_parent]) 
    {
    parent[x_parent] = y_parent;
    } else 
    {
    parent[x_parent] = y_parent;
    rank[y_parent]++;
    }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        parent.resize(n);
        rank.resize(n,0);
        // initialising this by own
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        
        // Doing Union
        for(auto &vec:edges){
            int first=vec[0];
            int second=vec[1];
            Union(first,second);
        }
        // making unorderd map to store the no. of not connected in each component
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[find(i)]++;
        } 

        // result storing the count of unreachable nodes
        long long result=0;
        long long remaining=n;
        for(auto &it:mp){
            int size=it.second;
            result=result+ (size)*(remaining-size);
            remaining-=size;
        }
        return result;
        
    }
};