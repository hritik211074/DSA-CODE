#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int t;
    // cin>>t;
    // while(t--){
    int n;
    cin>>n;
    vector<char>res(27);
    char ch='a';
    for(int i=1;i<27;i++){
        res[i]=ch;
        ch=ch+1;
    }
    string ans="";
    if(n<28){
        ans[0]='a';
        n--;
        ans[1]='a';
        n--;
        ans[2]=res[n];
    }else if(n>=28 && n<53 ){
        ans[2]='z';
        n-=26;
        ans[0]='a';
        n--;
        ans[1]=res[n];
    }else{
        ans[2]='z';
        n-=26;
        ans[1]='z';
        n-=26;
        ans[0]=res[n];
    }
    cout<<ans<<endl;
    // }
    return 0;
}