#include<bits/stdc++.h>
using namespace std;
void  lastoccurence(string &s,char ch,int &ans,int i){
    if(i>=s.length()){
        return ;
    }
    if(s[i]==ch){
        ans=i;
    }
     lastoccurence(s,ch,ans,i+1);
}
int main()
{
  string s;
  cin>>s;
  char ch;
  cin>>ch;
  int ans=-1;
  lastoccurence(s,ch,ans,0);
  if(ans==-1){
    cout<<"no position found"<<endl;
  }
  else{
    cout<<"found at"<<ans<<endl;
  }
  return 0;
}