#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        for(int m=0;m<=i;m++){
            cout<<"* ";
        }
        cout<<endl;
   
    }
    for(int p=0;p<n;p++){
         for(int x=0;x<p;x++){
            cout<<" ";
        }
        for(int y=0;y<(n-p);y++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;

}