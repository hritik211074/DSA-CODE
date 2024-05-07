#include<bits/stdc++.h>
using namespace std;
void solve(vector<string>&ans ,string digits,int index, vector<string>&mapping,string output){
    if(index>=digits.size()){
        ans.push_back(output);
        return;
    }
    int value=digits[index]-'0';
    string s=mapping[value];
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        // add character
        output.push_back(ch);
        // recursive call
        solve(ans,digits,index+1,mapping,output);
      // for backtrack
        output.pop_back();
    }
}
int main()
{   
    string digit;
    cin>>digit;
    string output="";
    vector<string>ans;
    int index=0;
    if(digit.size()==0){
        cout<<"empty"<<endl;
    }
    vector<string>mapping(10);
    mapping[2]="abc";
    mapping[3]="def";
    mapping[4]="ghi";
    mapping[5]="jkl";
    mapping[6]="mno";
    mapping[7]="pqrs";
    mapping[8]="tuv";
    mapping[9]="wxyz";
    solve(ans,digit,index,mapping,output);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}