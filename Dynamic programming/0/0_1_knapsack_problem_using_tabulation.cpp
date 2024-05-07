#include <bits/stdc++.h>
using namespace std;
// Here index represent index of weight
int solveUsingTabulation(int weight[], int value[], int n, int capacity){
    vector<vector<int>> dp(n, vector<int>(capacity + 1, 0));
       for (int w = weight[0]; w <= capacity; w++)
       {
        if (weight[0] <= capacity)
        {
            dp[0][w] = value[0];
        }
        else
        {
            dp[0][w] = 0;
        }
    }
  
    for (int index = 1; index < n; index++)
    {
        for (int wt = 0; wt <= capacity; wt++)
        {
            // include and exclude case
            int include = 0;
            if (weight[index] <= capacity)
            {
                include = value[index] + dp[index-1][wt - weight[index]];
            }
            int exclude = dp[index - 1][wt];
            dp[index][wt] = max(include, exclude);
        }
    }
    return dp[n-1][capacity];
}

int main()
{
    int weight[] = {4, 5, 1};
    int value[] = {1, 2, 3};
    int n = 3;
    int capacity = 4;
    int ans = solveUsingTabulation(weight, value, n, capacity);
    cout << "ans->" << ans << endl;
    return 0;
}