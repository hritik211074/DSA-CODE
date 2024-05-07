#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<"  ";
    }
    int k=0;
    for(int j=0;j<i+1;j++){
        cout<<i+j+1<<" ";
        k=i+j+1;
    }
    
  for(int j=0;j<i;j++){
    cout<<k-1<<" ";
    k--;
  }
 
    
    cout<<endl;
    }
    return 0;
}