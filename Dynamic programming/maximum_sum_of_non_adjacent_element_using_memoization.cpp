#include<bits/stdc++.h>
using namespace std;
int maximumSum(int ind,vector<int>&nums,vector<int>&dp){
    if(ind==0){
        return nums[0];
    }
    if(ind<0){
        return 0;
    }
    int include=nums[ind]+maximumSum(ind-2,nums,dp);
    int exclude=maximumSum(ind-1,nums,dp);
    return dp[ind]=max(include,exclude);
}
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>dp(n+1,-1);
    int ans=maximumSum(n-1,nums,dp);
    cout<<"maximum sum of non-adjacent element is ->"<<ans<<endl;
    return 0;
}