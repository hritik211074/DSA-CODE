#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }
    int ans= n* factorial(n-1);
    return ans;
}
int main(){
    int num;
    cin>>num;
    int result=factorial(num);
    cout<<"facorial of given number is :"<<result<<endl;
    return 0;
}