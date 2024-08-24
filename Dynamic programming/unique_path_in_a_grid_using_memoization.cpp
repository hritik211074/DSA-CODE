#include<bits/stdc++.h>
using namespace std;
int findUniquePath(int row,int col,vector<vector<int>>&dp){
    if(row==0 && col==0){
        return 1;
    }
    if(row<0 || col<0){
        return 0;
    }
    if(dp[row][col]!=-1){
        return dp[row][col];
    }
    int up=findUniquePath(row-1,col,dp);
    int left=findUniquePath(row,col-1,dp);
    return dp[row][col]=up+left;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>dp(n,vector<int>(m,-1));
    int ans= findUniquePath(n-1,m-1,dp);
    cout<<"unique path exist->"<<ans<<endl;
    return 0;
}