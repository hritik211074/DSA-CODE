#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char>st;
    int i=0;
    while(i!=s.length()){
        st.push(s[i]);
        i++;
    }
    string ans="";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    cout<<"required output is :"<<ans<<endl;
return 0;
}