#include<iostream>
using namespace std;
int sumDigit(int n){
     int sum=0;
    while(n>0){
    sum+=n%10;
    n=n/10;
    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter the value of num"<<endl;
    cin>>num;
    cout<<sumDigit(num)<<endl;
    return 0;
}