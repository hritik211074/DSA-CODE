#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value"<<endl;
    cin>>a;
    int i=0;
    for( ; ; ){
        if(i<a){
            cout<<i<<" ";
            i++;
        }
    }
}