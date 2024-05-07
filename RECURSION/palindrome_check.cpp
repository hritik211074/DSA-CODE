#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(string &s,int i,int j){
    if(i>j){
        return true ;
    }
    if(s[i]!=s[j]){
        return false;
    }
     checkpalindrome(s,i+1,j-1);

    
}
int main()
{
    string s;
    cin>>s;
    int i=0;
    int j=s.length()-1;
    bool ans =checkpalindrome(s,i,j);
    if(ans){
        cout<<"given string is palindromic"<<endl;
    }else{
        cout<<"given string is not palindromic"<<endl;
    }
    return 0;
}