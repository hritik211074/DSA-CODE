#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k=0;
        for(int j=0;j<i+1;j++){
            int ans=j+1;
            char ch=ans+'A'-1;
            cout<<ch;
            k=j;
        }
        while(k>=1){
            
            char ch=k+'A'-1;
            cout<<ch;
            k--;
        }
        cout<<endl;
       
    }
    return 0;
}