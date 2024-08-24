class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>indegree(numCourses,0);
        vector<int>result;
        int count=0;
        queue<int>que;
        unordered_map<int,vector<int>>adj;
        for(int i=0;i<prerequisites.size();i++){
                adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
                indegree[prerequisites[i][0]]++;
        
        }
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                count++;
                que.push(i);
            }
        }
        while(!que.empty()){
            int u=que.front();
            result.push_back(u);
            que.pop();
            for(int &v:adj[u]){
              indegree[v]--;
              if(indegree[v]==0){
                que.push(v);
                count++;
              }
            }
        }
        if(count==numCourses){
            return result;
        }else{
            return {};
        }

    }
};