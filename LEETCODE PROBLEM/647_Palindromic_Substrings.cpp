#include<bits/stdc++.h>
using namespace std;
bool checkPalindromic(string str)
{
    int i=0;
    int j=str.length()-1;
    while(i<=j){
        if(str[i]!=str[j]){
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
    int main(){

        string str;
        cin>>str;
        int cnt=0;
        for(int i=0;i<str.length();i++)
        {
        for(int j=1;j<=str.length()-i;j++)
        {
         string st=str.substr(i,j);
         bool result=checkPalindromic(st);
         if(result){
             cnt++;
         }
         else
         {
             continue;
         }
        }
    }  
    cout<<"total substring is-->>"<<cnt<<endl;
    return 0;
}