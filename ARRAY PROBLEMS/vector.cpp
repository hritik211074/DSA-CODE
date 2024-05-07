#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    vector<int>arr(n,5);
    cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
     cout<<endl;
    cout<<arr.empty()<<endl;
   
    vector<int>brr{3,5,4,2,1,6,78,8};
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    cout<<brr.empty()<<endl;
    
    int m;
    cout<<"Enter the value of m"<<endl;
    cin>>m;
    vector<int>crr(m);
    crr.push_back(5);
    crr.push_back(8);
    crr.push_back(6);
    crr.push_back(9);

    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    cout<<crr.empty()<<endl;
   
    return 0;
}