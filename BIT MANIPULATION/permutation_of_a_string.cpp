#include<bits/stdc++.h>
using namespace std;
vector<string>getSubsequences(string s){
    vector<string>ans;
    int n=s.length();
    for(int num=1;num<(1<<n);num++){
        string temp="";
        // we will create subsequences of string
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(num & (1<<i)){
                temp.push_back(ch);
            }
        }
        if(temp.length()>=0){
            ans.push_back(temp);
        }
    }
    return ans;

}
int main()
{
    string s;
    cin>>s;
    vector<string>ans;
    ans=getSubsequences(s);
    sort(ans.begin(),ans.end());
    cout<<"printing the subsequences->"<<endl;
    for(int i=0;i<ans.size();i++){
         cout<<ans[i]<<endl;
     }
    
    return 0;
}