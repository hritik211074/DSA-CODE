#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>dp(n,vector<int>(m,-1));
    dp[0][0]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 && j==0){
                dp[i][j]=1;
            }else{
                int up=0;
                int left=0;
                if(i>=1) up=dp[i-1][j];
                if(j>=1) left=dp[i][j-1];
                dp[i][j]= up + left;
            }
        }
    }
    cout<<"unique path exist->"<<dp[n-1][m-1]<<endl;
    return 0;
}