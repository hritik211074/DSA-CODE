#include<bits/stdc++.h>
using namespace std;
void addstring(string &num1,int p1,string &num2,int p2,string &ans,int carry){

 if(p1<0 && p2<0){
        if(carry!= 0){
            ans.push_back(carry+'0');
            return ;
        }
    }
    int n1= (p1>=0 ? num1[p1]: '0')-'0';
    int n2= (p2>=0 ? num2[p2]: '0')-'0';
     int sum=n1+n2+carry;
     int digit=sum%10;
     carry=sum/10;
     ans.push_back(digit+'0');
     addstring(num1,p1-1,num2,p2-1,ans,carry);
}
  
int main()
{
    string num1,num2;
    cin>>num1;
    cin>>num2;
    string ans;
    addstring(num1,num1.length()-1,num2,num2.length()-1,ans,0);
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.length();i++){
        cout<<ans[i];
    }
     return 0;
}