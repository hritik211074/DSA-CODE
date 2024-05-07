#include<iostream>
using namespace std;
int factorial(int n){
    int b=1;
    for(int i=1;i<=n;i++){
        b*=i;
    }
    return b;
}
int main(){
    int num;
    cout<<"Enter the value of num"<<endl;
    cin>>num;
    cout<<factorial(num)<<endl;
    return 0;
}