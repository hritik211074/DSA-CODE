#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i;j++){
          if(i==n-1||j==0||j==i){
            cout<<n-i+j<<" ";
          }
          else{
            cout<<"  ";
          }
        }
        cout<<endl;
    }
    return 0;
}