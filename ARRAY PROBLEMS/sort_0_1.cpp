#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    vector<int>arr(n);
    vector<int>brr;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    for(int i=0;i<arr.size();i++){
    if(arr[i]==0){
        brr.push_back(arr[i]);
    }
    }
   for(int i=0;i<arr.size();i++){
    if(arr[i]==1){
        brr.push_back(arr[i]);

    }
   }
   for(int i=0;i<brr.size();i++){
    cout<<brr[i]<<" ";
   }

    return 0;
}