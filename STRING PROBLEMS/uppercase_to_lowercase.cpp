#include<bits/stdc++.h>
using namespace std;
string lowerToUpper(string str){
    for(int i=0;i<str.size();i++)
    {
        str[i]=str[i]+32;
    }
    return str;
}
int main(){
    string str;
    cin>>str;
    string uppercase=lowerToUpper(str);
    cout<<uppercase<<endl;
}