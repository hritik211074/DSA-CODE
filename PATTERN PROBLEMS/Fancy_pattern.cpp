#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<(2*n-i-2);j++){
            cout<<"*";
        }
        for(int j=0;j<(2*i)+1;j++){
            if(j%2==0){
                cout<<i+1;
            }else{
                cout<<"*";
            }
        }
        for(int j=2*n-i-1;j>=0;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}