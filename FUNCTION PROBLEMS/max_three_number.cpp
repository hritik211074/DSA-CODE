#include<bits/stdc++.h>
using namespace std;
int maxNum(int a,int b,int c){
    if((a>=b)&&(a>=c)){
        return a;
    }
    else if((b>=a)&&(b>=c)){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int x,y,z;
    cout<<"Enter the value"<<endl;
    cin>>x>>y>>z;
    cout<<maxNum(x,y,z);
    return 0;
}