#include<bits/stdc++.h>
using namespace std;

int solveUsingTabulation(int n, int k) {
    vector<int>dp(n+1,-1);
    dp[1] = k;
    dp[2] = k + k * (k - 1); // Corrected this line
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 2] + dp[i - 1]) * (k - 1); // Corrected this line
    }
    return dp[n];
}

int main() {
    int n = 4;
    int k = 3;

    int ans = solveUsingTabulation(n, k );
    cout << "ans->" << ans << endl;
    return 0;
}
