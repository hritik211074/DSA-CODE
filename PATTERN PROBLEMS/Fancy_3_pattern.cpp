#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
         int a=1;
         int k=0;
        for(int j=0;j<2*i+1;j++){
           
            if(j==0||j==2*i){
                cout<<"* ";
            }
            else{
              while(a<=i){
                cout<<a<<" ";
                a++;
                k++;
              }
            }
            while(k>1){
                cout<<k-1<<" ";
                k--;
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        int a=1,k=0;
        for(int j=0;j<n-2*i+1;j++){
            if(j==0||j==n-2*i){
                cout<<"* ";
            }
            else{
                while(a<=n-i-2){
                    cout<<a<<" ";
                    a++;
                    k++;
                }
            }
            while(k>1){
                cout<<k-1<<" ";
                k--;
            }

        }
        cout<<endl;
    }
    return 0;
}