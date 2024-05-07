#include<bits/stdc++.h>
using namespace std;

int solveUsingMemoisation(int n, int k,vector<int>&dp) {
    if (n == 1) {
        return k;
    }
    if (n == 2) {
        return (k+k*(k - 1));
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n] = (solveUsingMemoisation(n - 2, k,dp) + solveUsingMemoisation(n - 1, k,dp)) * (k - 1);

    return dp[n];
}

int main() {
    int n = 4;
    int k = 3;
    vector<int>dp(n+1,-1);
    int ans = solveUsingMemoisation(n, k , dp);
    cout << "ans->" << ans << endl;
    return 0;
}
