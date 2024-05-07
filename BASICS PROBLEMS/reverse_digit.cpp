#include<iostream>
using namespace std;
int reverseDigit(int n){
    int reverse=0;
    while(n>0){
        int a=n%10;
        reverse=reverse*10+a;
        n=n/10;
    }
    return reverse;
}
int main(){
    int num;
    cout<<"Enter the value of num"<<endl;
    cin>>num;
    cout<<reverseDigit(num)<<endl;
    return 0;
}