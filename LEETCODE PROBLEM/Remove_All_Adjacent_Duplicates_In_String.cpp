#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string ans="";
    int i=0;
    while(i<str.length()){
    if(ans.length()>0){
        if(ans[ans.length()-1]==str[i]){
            ans.pop_back();
        }
        else{
            ans.push_back(str[i]);
        }
    }
    else{
        ans.push_back(str[i]);
    }
    i++;
    }
    cout<<"required ans is-->>"<<ans<<endl;
    return 0;
}