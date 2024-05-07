#include<bits/stdc++.h>
using namespace std;
void solve(vector<string>&ans,int n,int open ,int close,string output){
    if(open==0 && close==0){
        ans.push_back(output);
        return ;
    }
    // innclude
    if(open>0){
        output.push_back('(');
        solve(ans,n,open-1,close,output);
        //for backtrack
        output.pop_back();
    }
    // for exclude
    if(close>open){
        output.push_back(')');
        solve(ans,n,open,close-1,output);
        // for backtrack
        output.pop_back();
    }
}
 
int main()
{
   int n;
   cin>>n;
   vector<string>ans;
   string output="";
   int open=n;
   int close=n;
   solve(ans,n,open,close,output);
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<"  ";
   }
   return 0;
}