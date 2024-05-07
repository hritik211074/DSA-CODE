#include<bits/stdc++.h>
using namespace std;
void  removeoccurenceofsubstring(string &str,string &s){
    int pos=str.find(s);
    if(pos == string::npos){
        return ;
    }
    str.erase(pos,s.length());
    removeoccurenceofsubstring(str,s);
}
int main()
{   
    string str;
    cin>>str;
    string s;
    cin>>s;
    removeoccurenceofsubstring(str,s);
    cout<<"after removing substring is:"<<str<<endl;
   return 0;
}