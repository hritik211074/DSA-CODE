#include<bits/stdc++.h>
using namespace std;
int maximumSum(vector<int>&nums){
    int n=nums.size();
    vector<int>dp(n,-1);
    dp[0]=nums[0];
    for(int i=1;i<n;i++){
        int include=nums[i]+((i-2>=0)?dp[i-2]:0);
        int exclude=dp[i-1];
        dp[i]=max(include,exclude);
   }
   return dp[n-1];
}
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans=maximumSum(nums);
    cout<<"maximum sum of non-adjacent element is ->"<<ans<<endl;
    return 0;
}