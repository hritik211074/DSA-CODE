#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n,vector<int>&dp){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n]=fibonacci(n-1,dp)+fibonacci(n-2,dp);
}
int main()
{
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    int ans=fibonacci(n,dp);
    cout<<"fibonaacci number of given position is->"<<ans;
    return 0;
}

// Time complexity of this code is O(n)
// space comlexity of this code is O(n)+O(n) , Here O(n) for extra call stack
