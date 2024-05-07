#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i){
            cout<<j+1<<"  ";
            }
            for(int m=0;m<i-1;m++){
                cout<<" ";
            }
         
        }
        cout<<endl;
    }
    return 0;
}