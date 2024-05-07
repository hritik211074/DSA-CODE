#include<bits/stdc++.h>
using namespace std;
    bool checkPalindrome(string str,int i,int j){
        while(i<=j){
            if(str[i]!=str[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
       int i=0;
       int j=s.length()-1; 
       while(i<=j)
       {
           if(s[i]!=s[j]){
               bool result=checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);
               return result;
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
    bool result=validPalindrome(str);
    if(result){
        cout<<"it is possible to make it palindrome"<<endl;
    }
    else{
        cout<<"it is not possible to make it palindrome"<<endl;
    }
    return 0;
}
