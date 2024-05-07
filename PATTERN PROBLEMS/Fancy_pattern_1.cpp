#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
        int k=0;
        for(int j=0;j<i+1;j++){
            cout<<j+1<<" ";
            k++;
        }
        while(k>1){
            cout<<k-1<<" ";
            k--;
        }
        cout<<endl;
    }
    return 0;
}