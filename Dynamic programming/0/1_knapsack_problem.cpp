#include <bits/stdc++.h>
using namespace std;
// Here index represent index of weight
int solveUsingMemoisation(int weight[], int value[], int index, int capacity,vector<vector<int>>&dp)
{
    if (index == 0)
    {
        if (weight[0] <= capacity)
        {
            return value[0];
        }
        else
        {
            return 0;
        }
    }
    if(dp[index][capacity]!=-1){
        return dp[index][capacity];
    }
    // include and exclude case
    int include = 0;
    if (weight[index] <= capacity)
    {
        include = value[index] + solveUsingMemoisation(weight, value, index - 1, capacity - weight[index],dp);
    }
    int exclude =  solveUsingMemoisation(weight, value, index - 1, capacity,dp);
    dp[index][capacity]= max(include, exclude);
    return dp[index][capacity];
}

int main()
{
    int weight[] = {4, 5, 1};
    int value[] = {1, 2, 3};
    int n = 3;
    int capacity = 4;
    vector<vector<int>>dp(n,vector<int>(capacity+1,-1));
    int ans = solveUsingMemoisation(weight, value, n - 1, capacity,dp);
    cout << "ans->" << ans << endl;
    return 0;
}