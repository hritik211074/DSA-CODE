#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="daabcbaabcbc";
    string part="abc";
    int position=str.find(part);
    while(position!=string::npos){
        str.erase(position,part.length());
        position=str.find(part);
    }
    cout<<"finally my string is-->>"<<str<<endl;
    return 0;
}