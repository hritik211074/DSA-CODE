#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int a=1;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<=i;j++){
          cout<<a;
          a++;
          if(j<i){
            cout<<"*";
          }
        }
        cout<<endl;
    }
       int start=a-n;
       for(int i=0;i<n;i++){
        
        int k=start;
        for(int j=0;j<n-i;j++){
        cout<<k;
        k++;
         if(j<n-i-1){
            cout<<"*";
        }
        
        }
         start=start-(n-i-1);
       
        cout<<endl;
    }
    return 0;
}