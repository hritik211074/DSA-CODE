#include<bits/stdc++.h>
using namespace std;
void reversestring(string & str,int i,int j){
    if(i>j){
        return ;
    }
      swap(str[i],str[j]);
      reversestring(str,i+1,j-1);
   
}
int main()
{
    string str;
    cin>>str;
    int i=0;
    int j=str.length()-1;
    reversestring(str,i,j);
    cout<<"revverse string is :>"<<str;
    return 0;
}