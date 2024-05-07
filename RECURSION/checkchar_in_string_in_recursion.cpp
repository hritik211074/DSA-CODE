#include<bits/stdc++.h>
using namespace std;
bool checkchar(string s,char key,int size,int i){
    if(i==size){
        return false;
    }
    if(s[i]==key){
        return true;
    }
    checkchar(s,key,size,i+1);
}
int main()
{
    string  st="Hritik";
    char key='H';
    int size=st.length();
   if(checkchar(st,key,size,0)){
    cout<<"found"<<endl;
   }else{
   cout<<"not found"<<endl;
   }

return 0;
}