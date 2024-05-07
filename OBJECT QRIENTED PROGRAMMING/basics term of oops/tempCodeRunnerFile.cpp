#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        map<int,int>mp;
          for(int i=0;i<n;i++){
            mp[ans[i]]++;
        }
        cout<<mp.size()-1<<endl;

    }
   return 0;
}