#include<iostream>
using namespace std;
int sumNumber(int a,int b){
    cout<<(&a)<<endl;
    cout<<(&b)<<endl;
    return (a+b);
}
int main(){
    int x,y;
    cout<<"Enter two number"<<endl;
    cin>>x>>y;
    cout<<(&x)<<endl;
    cout<<(&y)<<endl;
    cout<<sumNumber(x,y);
    return 0;
}