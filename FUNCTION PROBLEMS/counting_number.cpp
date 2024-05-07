#include<iostream>
using namespace std;
void count(int n){

    for(int i=1;i<=n;i++){
      cout<<i<<" ";
    }
    
}
int main(){
    int x;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    count(x);
}