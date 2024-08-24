#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n,vector<int>&dp){
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    vector<int>dp(n+1);
    int ans=fibonacci(n,dp);
    cout<<"fibonacci series of givven position is ->"<<ans<<endl;
    return 0;
}
// time complexity of this code is O(n)
// space complexity of this code is O(n) and there is no memory for extra call stack