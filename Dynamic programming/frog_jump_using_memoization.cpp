#include<bits/stdc++.h>
using namespace std;
int frogJump(int ind,vector<int>&heights,vector<int>&dp){
    if(ind==0){
        return 0;
    }
    if(dp[ind]!=-1){
        return dp[ind];
    }
    int left=frogJump(ind-1,heights,dp)+abs(heights[ind]-heights[ind-1]);
    int right=INT_MAX;
    if(ind>1){
        right=frogJump(ind-2,heights,dp)+abs(heights[ind]-heights[ind-2]);
    }
    dp[ind]=min(left,right);
    return dp[ind];

}

int main()
{
    int n;
    cin>>n;
    vector<int>heights(n);
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
    vector<int>dp(n+1,-1);
    int ans=frogJump(n-1,heights,dp);
    cout<<"minimum jump required is ->"<<ans<<endl;
    return 0;
}