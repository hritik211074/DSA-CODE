#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int ans = fibonacci(n-1)+fibonacci(n-2);
    return ans;
}
int main(){
    int num;
    cout<<"Enter the index where you want to know fibonacci value"<<endl;
    cin>>num;
    int result=fibonacci(num);
    cout<<"Answer is: "<<result<<endl;
    return 0;
}