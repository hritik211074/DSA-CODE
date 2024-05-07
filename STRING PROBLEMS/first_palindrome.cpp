#include<bits/stdc++.h>
using namespace std;
bool checkPalindromic(string str){
    int length=str.size();
    int i=0;
    int j=length-1;
    while(i<=j){
    if(str[i]!=str[j])
    {
     return false;
    }
    else{
        i++;
        j--;
    }
    }
    return true;
}
int main(){
    string str1;
    cin>>str1;
    bool result=checkPalindromic(str1);
    if(result){
        cout<<"given string is palindromic"<<endl;
    }else{
        cout<<"given string is not palindromic"<<endl;
    }
    return 0;
  }