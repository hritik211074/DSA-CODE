#include<bits/stdc++.h>
using namespace std;
int cutintosegment(int n,int x,int y,int z){
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    int ans1=cutintosegment(n-x,x,y,z)+1;
    int ans2=cutintosegment(n-y,x,y,z)+1;
    int ans3=cutintosegment(n-z,x,y,z)+1;
    int ans=max(ans1,max(ans2,ans3));
    return ans;
}
  
int main()
{
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    int ans=cutintosegment(n,x,y,z);
    if(ans<=0){
        ans=0;
       
    }
      cout<<ans;
    
return 0;
}