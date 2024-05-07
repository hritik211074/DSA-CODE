#include<bits/stdc++.h>
using namespace std;
void  printsubsequences(string st,string output ,int i){
    if(i>=st.length()){
        cout<<output<<endl;
        return ;
    }
    // exclude
     printsubsequences(st,output,i+1);
    //  include
     output.push_back(st[i]);
     printsubsequences(st,output,i+1);
     
     }
int main()
{
    string s;
    cin>>s;
    string output="";
    printsubsequences(s,output,0);
    return 0;
}