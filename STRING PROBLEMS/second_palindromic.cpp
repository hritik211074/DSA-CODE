#include<bits/stdc++.h>
using namespace std;
bool checkPalindromic(string str){
  string st=str;
  reverse(str.begin(),str.end());
  return st==str;
}
int main(){
    string str;
    cin>>str;
    bool result=checkPalindromic(str);
    if(result)
    {
        cout<<"given string is palindromic"<<endl;
    }
    else
    {
        cout<<"given string is not a palindromic"<<endl;
    }
    return 0;
}